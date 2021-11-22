.section .data
	
	numero_atual: 
		.short 0
	
	.global numero_atual
	
.section .text

	.global calcula_resto
	
	calcula_resto:
	
		pushq %rbx
		movq $0, %rcx
		movw numero_atual(%rip), %ax
		movw $10, %bx
		
	
	division:
		cdq
		idivw %bx
		addw %dx, %cx #cx = cx + dx
		cmpw $0, %ax
		jg division
		
		movw %cx, %ax
		movw $0, %cx
		
		cmpw $9, %ax
		jg division
		jl end
		
		movb $0, %al
		
	end:
		popq %rbx
		ret
