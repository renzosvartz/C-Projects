fibonacci:

        #PROLOGUE
        subu $sp, $sp, 8        # expand stack by 8 bytes
        sw   $ra, 8($sp)        # push $ra (ret addr, 4 bytes)
        sw   $fp, 4($sp)        # push $fp (4 bytes)
        addu $fp, $sp, 8        # set $fp to saved $ra

	li   $v0, 0

	#BASE CASE(S)
        beqz $a0, ret0   	# return 0/1
        beq  $a0, 1, ret1
		
        #RECURSION n - 1        # fibonacci(n - 1)
	sub  $sp, $sp, 8	# store n and sum
	sw   $a0, 8($sp)
	sw   $v0, 4($sp)	
	sub  $a0, $a0, 1	# n - 1 for fibonacci(n - 1)
	jal  fibonacci		# stores fib(n - 1) in $v0
	lw   $t0, 4($sp)	# load current result, add to return $v0
	add  $v0, $t0, $v0 	# + fibonacci(n - 1)
	sw   $v0, 4($sp)	# store updated result

	#RECURSION n - 2
	lw   $a0, 8($sp)	# restores $a0 for fib(n - 2) if applicable
	blt  $a0, 2, epl
	sub  $a0, $a0, 2        # fib(n - 2)
        jal  fibonacci
	lw   $t0, 4($sp)
        add  $v0, $t0, $v0      # + fib(n - 2)
	j    epl
	
ret0:
	li   $v0, 0		# return 0
	j    epl
ret1:
	li   $v0, 1		# return 1
	j    epl

epl:
        # EPILOGUE
        move $sp, $fp           # restore $sp
        lw   $ra, ($fp)         # restore saved $ra
        lw   $fp, -4($sp)       # restore saved $fp
        j    $ra                # return to caller


