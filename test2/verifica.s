.section .data

.section .text
	.global verifica_aposta
	verifica_aposta:
		pushq %rbx
		movl $7, %eax	# Quantidade de numero e estrelas a verificar
		movq $0, %r8	# Quantidade de pontos
		
		movl $0xF, %edx 
		
	loop:
		movl %edi, %ebx
		movl %esi, %ecx
		ANDl %edx, %ebx
		ANDl %edx, %ecx
		
		cmpl %ebx, %ecx	# Comparar se numero/estrela na aposta é igual ao numero/estrela da chave sorteada
		jne skip
		
		addl $1, %r8d	
		cmpl $3 ,%eax	# Se estivermos ainda a comparar numeros, então saltar
		jg skip
		addl $1, %r8d 	# Como o ultimo valor comparado foi uma estrela falta adicionar +1 ponto
		
	skip:	
		SHRl $4, %edi 	# Colocar o proximo numero/estrela da aposta no 4 bits menos significativos
		SHRl $4, %esi	# Colocar o proximo numero/estrela da chave sorteada no 4 bits menos significativos
		subl $1, %eax	
		cmpl $0, %eax
		jne loop
		
		
	#end
		movl %r8d, %eax
		popq %rbx
		ret
