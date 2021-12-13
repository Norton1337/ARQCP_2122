.section .data


.section .text
	.global inc_and_square
	inc_and_square:
		movq $0, %rax
		incq (%rdi)
		cmpl $0, %esi
		je end
		movl %esi, %eax
		cdq
		imull %esi
	end:
		ret
