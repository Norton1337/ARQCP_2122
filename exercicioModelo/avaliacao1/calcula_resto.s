.section .data
	
	numero_atual:
		.short 0

	.global numero_atual
	
.section .text

	.global calcula_resto
	calcula_resto:
		pushq %rbx
		movw numero_atual(%rip), %ax
		movq $0, %rcx
		movw $10, %bx
		cmp $10, %ax
		jl nineOrLess
		
	getDigits:
		cdq
		idivw %bx
		addw %dx, %cx
		cmp $0, %ax
		jg getDigits
		
	nineOrLess:
		movw %cx, %ax
		movw $0, %cx
		cmp $9, %ax
		jg getDigits
		jl end
		movw $0, %ax
	end:
		popq %rbx
		ret

	
