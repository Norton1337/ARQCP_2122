.section .data
	.global even
	.global ptrvec
	.global num
.section .text
	.global test_even
	test_even:
		movq even(%rip), %rax
		movq $2, %rcx
		cdq
		idiv %ecx
		cmpl $0, %edx
		je isEven
		movl $0, %eax
		jmp end
	isEven:
		movq $0, %rax
		movl $1, %eax
	end:
		ret
	
	.global vec_sum_even
	vec_sum_even:
		movq $0, %rax
		movq ptrvec(%rip), %rsi
		movq $0, %r8
		movq $0, %rcx
		movl num(%rip), %r9d
		
	loop2:
		movq $0, %rax
		cmpl $0, %r9d
		jle end2
		movl (%rsi), %eax
		movq %rax, even(%rip)
		call test_even
		cmpq $1, %rax
		je isEqual
		addq $4, %rsi
		subl $1,%r9d
		jmp loop2
	isEqual:
		addl (%rsi), %r8d
		addq $4, %rsi
		subl $1, %r9d
		jmp loop2
	end2:
		movl %r8d, %eax
		ret
	
