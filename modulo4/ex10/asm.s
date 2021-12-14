.section .data


.section .text
	.global incr
	incr:
		pushq %rbp 
		movq $0, %rax
		movq %rsp, %rbp
		subq $8, %rsp 
		movl %edi, %ecx
		movl %ecx, -4(%rbp)
		movl -4(%rbp), %eax
		movsbl %sil, %ecx
		addl %ecx, %eax
		movl %eax, -8(%rbp)
		
		movw %ax, %cx
		movw %cx, %di
		movl -4(%rbp), %eax
				
		movq %rbp, %rsp
		popq %rbp
		ret
		
		
	.global call_incr
	call_incr:
		pushq %rbp 
		movq $0, %rax
		movq %rsp, %rbp
		subq $6, %rsp 
		movw $0xA1B2, -2(%rbp)
		movw -2(%rbp), %ax
		movw %ax, %di
		movb $0xC3, %sil
		call incr
		movl %eax, -6(%rbp)
		addl -2(%rbp), %eax
		
		movb $0xC3, %al
		
		
		
		movq %rbp, %rsp
		popq %rbp
		ret
