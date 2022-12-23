   .data
str1:
   .asciiz "abba"
str2:
   .asciiz "racecar"
str3:
   .asciiz "swap paws",
str4:
   .asciiz "not a palindrome"
str5:
   .asciiz "another non palindrome"
str6:
   .asciiz "almost but tsomla"

# array of char pointers = {&str1, &str2, ..., &str6}
ptr_arr:
   .word str1, str2, str3, str4, str5, str6, 0

yes_str:
   .asciiz " --> Y\n"
no_str:
   .asciiz " --> N\n"

   .text

# main(): ##################################################
#   char ** j = ptr_arr
#   while (*j != 0):
#     rval = is_palindrome(*j)
#     printf("%s --> %c\n", *j, rval ? yes_str: no_str)
#     j++
#
main:
   li   $sp, 0x7ffffffc    # initialize $sp

   # PROLOGUE
   subu $sp, $sp, 8        # expand stack by 8 bytes
   sw   $ra, 8($sp)        # push $ra (ret addr, 4 bytes)
   sw   $fp, 4($sp)        # push $fp (4 bytes)
   addu $fp, $sp, 8        # set $fp to saved $ra

   subu $sp, $sp, 8        # save s0, s1 on stack before using them
   sw   $s0, 8($sp)        # push $s0
   sw   $s1, 4($sp)        # push $s1

   la   $s0, ptr_arr        # use s0 for j. init ptr_arr
main_while:
   lw   $s1, ($s0)         # use s1 for *j
   beqz $s1, main_end      # while (*j != 0):
   move $a0, $s1           #    print_str(*j)
   li   $v0, 4
   syscall
   move $a0, $s1           #    v0 = is_palindrome(*j)
   jal  is_palindrome
   beqz $v0, main_print_no #    if v0 != 0:
   la   $a0, yes_str       #       print_str(yes_str)
   b    main_print_resp
main_print_no:             #    else:
   la   $a0, no_str        #       print_str(no_str)
main_print_resp:
   li   $v0, 4
   syscall

   addu $s0, $s0, 4       #     j++
   b    main_while        # end while
main_end:

   # EPILOGUE
   move $sp, $fp           # restore $sp
   lw   $ra, ($fp)         # restore saved $ra
   lw   $fp, -4($sp)       # restore saved $fp
   j    $ra                # return to kernel
# end main ################################################
is_palindrome:

	#PROLOGUE
	subu $sp, $sp, 8        # expand stack by 8 bytes
   	sw   $ra, 8($sp)        # push $ra (ret addr, 4 bytes)
   	sw   $fp, 4($sp)        # push $fp (4 bytes)
   	addu $fp, $sp, 8        # set $fp to saved $ra

	#SAVE STRING
	subu $sp, $sp, 4	# expand stack for the string
	sw   $a0, 4($sp) 

	#STRLEN
	jal  strlen

	#COMPARISON VARIABLES
	li   $t0, 0		# t0 = i = 0
	move $t1, $v0     	# t1 = len = strlen(string)
	sub  $t2, $t1, 1	# t2 for string[len - i - 1]
        lw   $a0, 4($sp)	# load string
	move $a1, $a0		# create a copy of str for string[len - i - 1]
	addu $a1, $a1, $t1	# string[len]
	subu $a1, $a1, 1	# string[len - 1]
	srl  $t1, $t1, 1	# for i < len / 2

for:
	bge  $t0, $t1, ret1 	# branch if i >= len / 2
	lb   $t3, ($a0) 	# string[i]
	lb   $t4, ($a1)		# string[len - i - 1]
	bne  $t3, $t4, ret0
	addu $a0, $a0, 1	# for string[i]
	subu $a1, $a1, 1	# for string[len - i - 1]
	addu $t0, $t0, 1	# i++
	j    for
	
ret0:
	li   $v0, 0		# return 0
	j    epl

ret1:
	li   $v0, 1	 	#return 1
	j    epl

epl:
	lw   $a0, 4($sp)	# restore str
 	#EPILOGUE
   	move $sp, $fp           # restore $sp
   	lw   $ra, ($fp)         # restore saved $ra
   	lw   $fp, -4($sp)       # restore saved $fp
   	j    $ra                # return to caller
 

strlen:
   	# PROLOGUE
   	subu $sp, $sp, 8        # expand stack by 8 bytes
   	sw   $ra, 8($sp)        # push $ra (ret addr, 4 bytes)
   	sw   $fp, 4($sp)        # push $fp (4 bytes)
   	addu $fp, $sp, 8        # set $fp to saved $ra

   	# BODY
   	li   $t0, 0               # initialize counter = 0

	loop:
   	lb   $t1, ($a0)           #load the first character of the str $t0
   	beqz $t1, endloop       #if char == \0 end
   	add  $t0, $t0, 1        #else count += 1
   	add  $a0, $a0, 1        #inc the str $a0
   	j    loop

endloop:
   	move $v0, $t0

  	# EPILOGUE
   	move $sp, $fp           # restore $sp
   	lw   $ra, ($fp)         # restore saved $ra
   	lw   $fp, -4($sp)       # restore saved $fp
   	j    $ra                # return to caller
