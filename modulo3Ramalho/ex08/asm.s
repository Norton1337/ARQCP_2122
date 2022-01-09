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
		je is_even
		movl $0, %eax
		jmp end
	is_even:
		movl $1, %eax
		jmp end	
	end:
		ret
	
	
	.global vec_sum_even
	vec_sum_even:
		movq $0, %rax
		movq $0, %rcx
		movq $0, %r8
		movq ptrvec(%rip), %rsi
		movl num(%rip), %r9d
		
	loop:
		movq $0, %rax
		cmpl $0, %r9d
		jle end2
		movl (%rsi), %eax
		movq %rax, even(%rip)
		call test_even
		cmpq $1, %rax
		je sum_even
		subl $1, %r9d
		addq $4,%rsi
		jmp loop
	sum_even:
		addl (%rsi), %r8d
		subl $1, %r9d
		addq $4,%rsi
		jmp loop
		
	end2:
		movl %r8d, %eax
		ret
