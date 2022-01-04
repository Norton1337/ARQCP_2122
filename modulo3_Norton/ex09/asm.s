.section .data
	.global ptrvec
	.global x
	.global num
	
.section .text
	.global vec_search
	vec_search:
		pushq %rbx
		movq ptrvec(%rip), %rdi
		movq $0, %rax
		movq $0, %rdx
		movw x(%rip), %dx
		movl num(%rip), %ecx
	loop:
		cmpl $0, %ecx
		jle end
		movw (%rdi), %bx
		cmpw %dx, %bx
		je equals
		subl $1, %ecx
		addq $2, %rdi
		jmp loop
	equals:
		movq %rdi, %rax
	end:
		popq %rbx
		ret
