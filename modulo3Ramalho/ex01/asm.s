.section .data
	.global ptr1

.section .text
	.global zero_count
		movq ptr1(%rip), %rdx
		movq $0, %rax
		movq $0, %rcx
	
	loop:
		movb (%rdx), %cl
		cmpb $0, %cl
		je end
		cmpb $'0', %cl
		je count_zeros
		incq %rdx
		jmp loop

	count_zeros:
		addl $1, %eax
		incq %rdx
		jmp loop
	
	end:
		ret
