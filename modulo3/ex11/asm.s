.section .data
	.global ptrvec
	.global num
	
.section .text
	.global vec_greater20
	vec_greater20:
		pushq %rbx
		movq ptrvec(%rip), %rdi
		movl num(%rip), %ecx
		movq $0, %rbx
		movq $0, %rax
		
	loop:
		cmpl $0, %ecx
		je end
		movq (%rdi), %rbx
		cmpq $20, %rbx
		jg isGreater
		addq $8, %rdi
		subl $1, %ecx
		jmp loop
	isGreater:
		addl $1, %eax
		addq $8, %rdi
		subl $1, %ecx
		jmp loop		
	end:
		popq %rbx
		ret
