.section .data
	.global ptrvec
	.global num
	
.section .text
	.global array_sort
	array_sort:
		pushq %rbx
		movq $0, %rbx
		movq $0, %r8
		movq $0, %r9
		movq $0, %r10
		movq ptrvec(%rip), %rsi
		movl num(%rip), %r9d
		subl $1, %r9d
		cmpl $0, %r9d
		jle end
	loop:
		movl (%rsi), %ecx
		movl 4(%rsi), %edx
		cmp %ecx, %edx
		jle skip
		movl %edx, (%rsi)
		addq $4, %rsi
		movl %ecx, (%rsi)
		subq $4, %rsi
		movq $1, %r8
	skip:
		addq $4, %rsi
		addl $1, %r10d
		cmpl %r9d, %r10d
		jl loop

	reset:
		cmpq $0, %r8
		je end
		movq $0, %r8
		movl $4, %eax
		mull %r10d
		subq %rax, %rsi
		movl num(%rip), %r9d
		subl $1, %r9d
		movl $0, %r10d
		jmp loop	
		
	end:
		popq %rbx
		ret
