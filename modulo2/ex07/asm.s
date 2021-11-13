.section .data

	op1:
		.short 0
	byte1:
		.byte 0
	byte2:
		.byte 0
	#s1:
		#.short 0
	#s2:
		#.short 0
	.global op1
	.global byte1
	.global byte2
	.global s1
	.global s2
.section .text
	.global swapBytes
	swapBytes:
		movw op1(%rip), %ax
		movb %ah, %bl
		movb %al, %ah
		movb %bl, %al
		ret
		
	.global concatBytes
	concatBytes:
		movl $0, %eax
		movb byte1(%rip), %ah
		movb byte2(%rip), %al
		ret
		
	.global crossSumBytes
	crossSumBytes:
		pushq %rbx
		movw s1(%rip), %ax
		movw s2(%rip), %cx
		
		movb %ah, %bh
		movb %al, %bl
		
		addb %cl, %bh
		addb %ch, %bl
		movw %bx, %ax
		popq %rbx
		ret
		
		
