.section .data

.section .text

	.global add_byte
	add_byte:
		pushq %rbx
		movq $0, %rax
		movq $0, %rcx
		movl (%rsi), %ebx
		movl %ebx, (%rdx)
		
		addq $4, %rsi
		addq $4, %rdx
		movb %dil, %cl
		
	loop:
		movb (%rsi), %al
		addb %dil, %al
		ANDb $0, (%rsi)
		ORb %al, (%rsi)
		movl (%rsi), %eax
		movl %eax, (%rdx)
		
		addq $4, %rsi
		addq $4, %rdx
		subl $1, %ebx
		cmpl $0, %ebx
		jg loop
		
		
		popq %rbx
		ret
