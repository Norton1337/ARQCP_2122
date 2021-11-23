.section .data
	
	nota_min:
		.byte 20

	nota_max:
		.byte 0

	.global nota_min
	.global nota_max
	
.section .text

	.global min_max_notas
	min_max_notas:
		pushq %rbx
		movq $0, %rax 	#colocar todos os registos a zeros para evitar erros na comparação
		movq $0, %rbx
		movq $0, %rcx
		movq $0, %rdx
		
		movb nota_final(%rip), %bl
		movb nota_min(%rip), %cl
		movb nota_max(%rip), %dl
		
		cmpb %dl, %bl 
		jg newMax
		
		cmpb %cl, %bl
		jl newMin
		
		jmp end
		
	newMin: 			#nota final é menor que a nota minima, logo, editar nota minima e retornar 1
		movb $1, %al
		movb %bl, nota_min(%rip)
		jmp end
	
	newMax: 			#nota final é maior que a nota maxima, logo, editar nota maxima e retornar 1
		movb $1, %al
		movb %bl, nota_max(%rip)
		cmpb %cl, %bl 	# testar se nota final é menor que a nota minima (não foi testado antes)
		jl newMin
		
	end:
		popq %rbx
		ret
