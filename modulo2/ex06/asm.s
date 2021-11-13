.section .data

	op1:
		.short 0
	#byte1:
		#.byte 0
	#byte2:
		#.byte 0
		
	.global op1
	.global byte1
	.global byte2
	
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
		movb byte1(%rip), %al
		movb byte2(%rip), %ah
		ret
