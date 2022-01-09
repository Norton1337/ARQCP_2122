.section .data


.section .text
	.global greatest
	greatest:
		cmpl %edi, %esi
		jge isLargest
		movl %edi, %eax
		jmp next
	isLargest:
		movl %esi, %eax
	next:
		cmpl %eax, %edx
		jl end
		movl %edx, %eax
	end:
		ret
