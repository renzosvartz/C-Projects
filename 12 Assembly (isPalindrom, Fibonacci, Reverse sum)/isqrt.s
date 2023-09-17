isqrt:
	#PROLOGUE
        subu $sp, $sp, 8        # expand stack by 8 bytes
        sw   $ra, 8($sp)        # push $ra (ret addr, 4 bytes)
        sw   $fp, 4($sp)        # push $fp (4 bytes)
        addu $fp, $sp, 8        # set $fp to saved $ra

        #BASE CASE
        blt  $a0, 2, retn

        #RECURSION n            # isqrt(n >> 2)
        sub  $sp, $sp, 4        # store n
        sw   $a0, 4($sp)
        srl  $a0, $a0, 2        # n >> 2 for isqrt(n >> 2)
        jal  isqrt              # stores fib(n - 1) in $v0
      	sll  $t0, $v0, 1        # small = isqrt(n >> 2) << 1
	addu $t1, $t0, 1	# large = small + 1
	mul  $t2, $t1, $t1	# large * large
	lw   $a0, 4($sp)        # restores $a0 (n) for (large * large > n)
	bgt  $t2, $a0, retsmall
        move $v0, $t1           # return large
	j    epl

retn:
        move $v0, $a0           # return n
	j    epl

retsmall:
	move $v0, $t0           # return small
	j    epl

epl:
        # EPILOGUE
        move $sp, $fp           # restore $sp
        lw   $ra, ($fp)         # restore saved $ra
        lw   $fp, -4($sp)       # restore saved $fp
        j    $ra                # return to caller
