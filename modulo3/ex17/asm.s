.section .data
	.global ptrvec
	.global num
	
.section .text
	.global array_sort
	array_sort:
		pushq %rbx
		pushq %r12
		movq $0, %rbx
		movq $0, %r8
		movq $0, %r9
		movq ptrvec(%rip), %rsi
		movl num(%rip), %ebx
		movl num(%rip), %r10d
		movl (%rsi), %ecx
		movq $0, %r12
		
	loop:
		cmpl $0, %r10d
		je end
		cmpl $0, %ebx
		je change
		movl (%rsi), %edx
		cmpl %ecx, %edx
		jge isGreater
		subl $1, %ebx
		addq $4, %rsi
		jmp loop
		
	isGreater:
		movl %edx, %ecx
		movl num(%rip), %r9d
		subl %ebx, %r9d
		subl $1, %ebx
		addq $4, %rsi
		jmp loop
	
	change:
		movslq %r10d, %rax
		movq $4, %rdx
		mulq %rdx
		subq %rax, %rsi
		movq $0, %rdx
		movl (%rsi), %r8d
		movl %ecx, (%rsi)
		subl %r12d, %r9d
		movslq %r9d, %rax
		movq $4, %rdx
		mulq %rdx
		addq %rax, %rsi
		movl %r8d, (%rsi)
		subq %rax, %rsi
		subl $1, %r10d
		addq $4, %rsi
		movl %r10d, %ebx
		movl (%rsi), %ecx
		addl $1, %r12d
		jmp loop
		
	end:
		movl %ecx, %eax
		popq %r12
		popq %rbx
		ret
