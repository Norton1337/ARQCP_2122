.section .data


.section .text
	.global inc_and_square
	inc_and_square:
		movq $0, %rax
		incl (%rdi)
		movl %esi, %eax
		imull %esi
		ret
