.section .data
	.global ptrvec
	.global num
	
.section .text
	.global sum_first_byte
	sum_first_byte:
		pushq %rbx
		movq ptrvec(%rip), %rdi
		movq $0, %rbx
		movl num(%rip), %ebx
		movq $0, %rax
		movq $0, %rcx
	
	loop:
		cmpl $0, %ebx
		je end
		movb (%rdi), %cl
		movsbl %cl, %edx
		addl %edx, %eax
		addq $4, %rdi
		subl $1, %ebx
		jmp loop
		
		
	end:
		popq %rbx
		ret
