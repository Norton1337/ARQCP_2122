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
		movq ptrsrc(%rip), %rsi
		movq ptrdest(%rip), %rdi
		movl num(%rip), %ebx
		movl num(%rip), %r10d
		movl (%rsi), %ecx

		
	loop:

		cmpl $0, %ebx
		je end
		movl (%rsi), %edx
		cmpl %ecx, %edx
		jl isSmallest
		subl $1, %ebx
		addq $4, %rsi
		jmp loop
		
	isSmallest:
		
		movl %edx, %ecx
		movl num(%rip), %r9d
		subl %ebx, %r9d
		subl $1, %ebx
		addq $4, %rsi
		jmp loop

		
	end:
		movl %ecx, %eax
		popq %rbx
		ret
