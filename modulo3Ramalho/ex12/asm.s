.section .data
	.global ptrvec
	.global num

.section .text
	.global vec_zero
	vec_zero:
		movq ptrvec(%rip), %rsi
		movl num(%rip), %ecx
		movq $0, %rax
		movq $0, %rdx
		
	loop:
		cmpl $0, %ecx
		je end
		movw (%rsi), %dx
		cmpw $100, %dx
		jge zeroElem
		subl $1, %ecx
		addq $2, %rsi
		jmp loop
	zeroElem:
		movw $0, (%rsi)
		addl $1, %eax
		subl $1, %ecx
		addq $2, %rsi
		jmp loop
	end:
		ret
