.section .data
	.global ptrvec
	.global num

	
.section .text
	.global count_seq
	count_seq:
		pushq %rbx
		movq $0, %rcx
		movq ptrvec(%rip), %rsi
		movl num(%rip), %ebx
		subl $2, %ebx
		
	loop:
		cmpl $0, %ebx
		jle end
		movl (%rsi), %r8d
		movl 4(%rsi), %r9d
		movl 8(%rsi), %r10d
		cmpl %r8d, %r9d
		jle noSatisfy 
		cmpl %r9d, %r10d
		jle noSatisfy
		addl $1, %ecx
	noSatisfy:	
		subl $1, %ebx
		addq $4, %rsi
		jmp loop
		

	end:
		movl %ecx, %eax
		popq %rbx
		ret
