.section .data


.section .text
	proc: 
		pushq %rbx
		movl %edi, %eax
		addl %edx, %eax
		movl %eax, (%rsi)
		
		movl %edx, %eax
		subl %edi, %eax
		movl %eax, (%rcx)
		
		movw %r8w, %ax
		addw (%rcx), %ax
		movw %ax, (%r9)
		
		movb 16(%rbp), %al
		movb $2, %bl
		mulb %bl
		movb %al, 17(%rbp)
		popq %rbx
		ret
		
		
	.global call_proc
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
		
		# proc(x1,&x1,x2,&x2,x3,&x3,x4,&x4)
		movl -4(%rbp), %edi		# x1
		leaq -4(%rbp), %rsi		# &x1
		movl -8(%rbp), %edx		# x2
		leaq -8(%rbp), %rcx		# &x2
		movw -10(%rbp), %r8w 	# x3
		leaq -10(%rbp), %r9		# &x3
		movb -11(%rbp), %al		
		movb %al, 16(%rbp)		# x4
		leaq -11(%rbp), %rax	
		movq %rax, 17(%rbp)		# &x4
		call proc
		
		
		movl -4(%rbp), %eax
		addl -8(%rbp), %eax
		
		movw -10(%rbp), %bx
		movsbw 17(%rbp), %r10w
		subw %r10w, %bx
		
		imulw %bx
		
		popq %r10
		popq %rbx
		movq %rbp, %rsp
		
		popq %rbp
		ret
