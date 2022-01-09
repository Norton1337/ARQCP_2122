.section .data


.section .text
	.global call_proc
	proc:
		pushq %rbx
		#*p1 = x1 + x2
		movl %edi, %eax
		addl %edx, %eax
		movl %eax, (%rsi)
		
		#*p2 = x2 - x1
		movl %edx, %eax
		subl %edi, %eax
		movl %eax, (%rcx)
		
		#*p3 = x3 + x2
		movw %r8w, %ax
		addw (%rcx), %ax
		movw %ax, (%r9)
		
		#p4 = x4 * 2
		movb 16(%rbp), %al
		movb $2, %bl
		mulb %bl
		movb %al, 24(%rbp)
		popq %rbx
		ret
	
	call_proc:
		pushq %rbp
		movq %rsp, %rbp
		pushq %rbx
		pushq %r10
		subq $11, %rsp
		movl $1, -4(%rbp)
		movl $2, -8(%rbp)
		movw $3, -10(%rbp)
		movb $4, -11(%rbp)
		
		#proc
		movl -4(%rbp), %edi
		leaq -4(%rbp), %rsi
		movl -8(%rbp), %edx
		leaq -8(%rbp), %rcx
		movw -10(%rbp), %r8w
		leaq -10(%rbp), %r9
		movb -11(%rbp), %al
		movb %al, 16(%rbp)
		leaq -11(%rbp), %rax
		movq %rax, 24(%rbp)
		
		call proc
		
		movl -4(%rbp), %eax
		addl -8(%rbp), %eax
		
		movw -10(%rbp), %bx
		movsbw 24(%rbp), %r10w
		subw %r10w, %bx
		
		imulw %bx
		
		popq %r10
		popq %rbx
		movq %rbp, %rsp
		popq %rbp
		ret
		
		
	
