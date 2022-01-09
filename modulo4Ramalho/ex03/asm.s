.section .data

.section .text
	.global greatest
	greatest:
		movl %edi, %eax
		movl %esi, %r8d
		movl %edx, %r9d
		
		cmpl %eax, %r8d
		jg isGreater
		cmpl %eax, %r9d
		jg end2
		jle end
	isGreater:
		movl %r8d, %eax
		cmpl %r8d, %r9d
		jle end
		movl %r9d, %eax
	end:
		ret
	end2:
		movl %r9d, %eax
		ret
