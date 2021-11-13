.section .data

	op1:
		.short 0
		
	.global op1

.section .text
	.global swapBytes
	swapBytes:
		movw op1(%rip), %ax
		movb %ah, %cl
		movb %al, %ah
		movb %cl, %al
		ret
