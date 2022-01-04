.section .data
	.global ptrvec
	.global num
	
	test:
		.int 0
.section .text
	.global vec_sum
	vec_sum:
		movq ptrvec(%rip), %rdi
		movq $0, %rax
		movq $0, %rcx
		movw num(%rip), %cx
		cmpw $0, %cx
		jle end
	add_elements:
		addl (%rdi), %eax
		subw $1, %cx
		cmpw $0, %cx
		je end
		addq $4, %rdi
		jmp add_elements
		
	end:
		movl %eax, test(%rip)
		ret
		
		
	.global vec_avg
	vec_avg:
		movl test(%rip),%eax
		pushq %rbx
		movswl num(%rip), %ebx
		cmpl $0, %ebx
		jle end2
		cdq
		idivl %ebx
	end2:
		popq %rbx
		ret
