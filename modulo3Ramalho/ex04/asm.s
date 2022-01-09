.section .data
	.global ptrvec

.section .text
	.global vec_add_one
	vec_add_one:
		movq ptrvec(%rip), %rsi
		movl num(%rip), %edi
		
	loop:
		cmpl $0, %edi
		jle end
		incq (%rsi)
		addq $8, %rsi
		subl $1, %edi
		
		jmp loop
	end:
		ret
