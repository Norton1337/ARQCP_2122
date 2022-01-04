.section .data
	.global ptrvec
	.global num
.section .text
	.global vec_add_one
	vec_add_one:
		movq ptrvec(%rip), %rdi
		movl num(%rip), %ecx
		cmpl $0, %ecx
		jle end
	inc_loop:
		incq (%rdi)
		movq (%rdi), %rax
		addq $8, %rdi
		loop inc_loop
		
	end:
		ret
