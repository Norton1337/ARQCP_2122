.section .data
	.global ptrvec
	.global num
	.global x

.section .text
	.global exists
	exists:
		movq ptrvec(%rip), %rsi
		movq $0, %r9
		movl num(%rip), %r8d
		movw x(%rip), %dx
		movq $0, %rax
	loop:
		cmpl $0, %r8d
		je end
		movw (%rsi), %cx
		cmpw %dx, %cx
		je isEqual
		addq $2, %rsi
		subl $1, %r8d
		jmp loop
		
	isEqual:
		cmpq $0, %r9
		je first_appearance
		movl $1, %eax
		addq $2, %rsi
		subl $1, %r8d
		jmp loop
		
	first_appearance:
		movq $1, %r9
		addq $2, %rsi
		subl $1, %r8d
		jmp loop
	end:
		ret
	
