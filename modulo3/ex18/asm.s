.section .data
	.global ptrsrc
	.global num
	.global ptrdest
	
.section .text
	.global sort_without_reps
	sort_without_reps:
		pushq %rbx
		movq $0, %rbx
		movq $0, %r8
		movq $0, %r9
		movq $0, %r10
		movq ptrsrc(%rip), %rsi
		movq ptrdest(%rip), %rdi
		movl num(%rip), %r9d
		subl $1, %r9d
		cmpl $0, %r9d
		jle end
	loop:
		movl (%rsi), %ecx
		movl 4(%rsi), %edx
		cmp %ecx, %edx
		jge skip
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
		movl $4, %eax
		mull %r10d
		subq %rax, %rsi
		movq $0, %rax
		movl num(%rip), %r9d
		movl (%rsi), %ecx
		movl %ecx, (%rdi)
		addq $4, %rsi
	loop2:
		movl (%rsi), %ecx
		movl (%rdi), %edx
		cmp %edx, %ecx
		je skip2
		addl $1, %eax
		addq $4, %rdi
		movl %ecx, (%rdi)
	skip2:
		addq $4, %rsi
		cmpl $0, %r9d
		je finish
		subl $1, %r9d
		jmp loop2
		
	finish:
		
		popq %rbx
		ret
