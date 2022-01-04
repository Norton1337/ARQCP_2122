.section .data
	.global ptrvec
	.global num
	
.section .text
	.global vec_zero
	vec_zero:
		pushq %rbx
		movq ptrvec(%rip), %rdi
		movq $0, %rbx
		movl num(%rip), %ebx
		movq $0, %rax
		movq $0, %rcx
	loop:
		cmpl $0, %ebx
		je end
		movw (%rdi), %cx
		cmpw $100, %cx
		jge changeToZero
		addq $2, %rdi
		subl $1, %ebx
		jmp loop
		
	changeToZero:
		movw $0, (%rdi)
		addq $2, %rdi
		subl $1, %ebx
		addl $1, %eax
		jmp loop
	
	end:
		popq %rbx
		ret
