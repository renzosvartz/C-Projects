reverse_prefix_sum:

        #PROLOGUE
        subu $sp, $sp, 8        # expand stack by 8 bytes
        sw   $ra, 8($sp)        # push $ra (ret addr, 4 bytes)
        sw   $fp, 4($sp)        # push $fp (4 bytes)
        addu $fp, $sp, 8        # set $fp to saved $ra

	#STORE ARR
	sub  $sp, $sp, 4        
	sw   $a0, 4($sp)        # store address $a0
	lw   $t0, ($a0)         # load $t0 = *arr

        #BASE CASE
        beq  $t0, -1, retz      # return 0

        #RECURSION arr + 1      # reverse_prefix_sum(arr + 1)
        addu $a0, $a0, 4        # *arr + 1 for fibonacci(n - 1)
        jal  reverse_prefix_sum # stores reverse_prefix_sum(arr + 1) in $v0
        lw   $a0, 4($sp)        # load address $a0
	lw   $t0, ($a0)         # load *arr
        addu  $t0, $t0, $v0      # r = reverse_prefix_sum(arr + 1) + *arr
        sw   $t0, ($a0)         # store updated element
	move $v0, $t0           # return r
        j    epl

retz:
        li   $v0, 0             # return 0
        j    epl

epl:
        # EPILOGUE
        move $sp, $fp           # restore $sp
        lw   $ra, ($fp)         # restore saved $ra
        lw   $fp, -4($sp)       # restore saved $fp
        j    $ra                # return to caller
	
