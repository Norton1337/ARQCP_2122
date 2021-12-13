.section .data


.section .text
	.global sum_smaller
	sum_smaller:
		cmpl %edi, %esi
		jl isLess
		movl %edi, %eax
		movq %rax, (%rdx)
		jmp end
	isLess:
		movl %esi, %eax
		movq %rax, (%rdx)
	end:	
		addl %edi, %esi
		movl %esi, %eax
	
		ret
