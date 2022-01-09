.section .data

.section .text
	.global inc_and_square
	inc_and_square:
		movl %edi, %ecx
		movl %esi, %eax
		mull %esi
		addq $1, (%rdi)
	end:
		ret
