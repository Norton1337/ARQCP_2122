.section .data

.section .text
	.global swapBytes
	swapBytes:
		movw s(%rip), %ax
		movb %ah, %cl
		movb %al, %ah
		movb %cl, %al
		ret
