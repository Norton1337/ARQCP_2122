.section .data


.section .text
	.global isMultiple
	isMultiple:
		movq $0, %rdx
		movl A(%rip),%eax
		cdq
		movl B(%rip),%ecx
		cmp $0, %ecx
		je end
		idivl %ecx
		cmp $0, %edx
		je itIsMultiple
		jmp else
	itIsMultiple:
		movq $0, %rax
		movb $1, %al
		jmp end
	else:
		movq $0, %rax
		movb $0, %al
	end:
		ret
		
