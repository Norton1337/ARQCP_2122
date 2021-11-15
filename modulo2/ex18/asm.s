.section .data
	A:
		.int 10
	B:
		.int 5
		
	.global A
	.global B

.section .text
	.global summation
	summation:
		pushq %rbx
		
		movl $0, %ebx
		movl $0, %edx
		movl $0, %r8d
		movl $1, %r9d
		movl num(%rip), %r10d
		
		movl A(%rip), %eax
		mull %eax
		movl %eax, %ecx
		movl B(%rip), %ebx
		cdq
		
	loop:
		movl %r9d, %eax
		mull %eax
		mull %ecx
		divl %ebx
	
		addl %eax, %r8d
		addl $1, %r9d
		cmp %r10d,%r9d
		jl loop
		je loop
		
		movl %r8d, %eax
		popq %rbx
		ret
