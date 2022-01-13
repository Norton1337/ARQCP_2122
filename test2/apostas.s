.section .data

.section .text
	.global apostas_premiadas
	apostas_premiadas:
		pushq %rbx
		movl $0, %r9d		# Quantidade de premios sorteados
		
	loop:
		movl (%rdi), %ebx
		movl %edx, %r8d
		
		pushq %rdi
		pushq %rsi
		pushq %rdx
		pushq %rcx
		pushq %r9
		
		movl %ebx, %edi
		movl %r8d, %esi
		
		call verifica_aposta
		popq %r9
		popq %rcx
		popq %rdx
		popq %rsi
		popq %rdi
		
		cmpl $3, %eax		# Comparar se resultado da aposta tem pontuação menor a 3
		jl skip
		SHRl $28, %ebx		# Colocar ID da aposta nos 4 bits menos significativos
		movb %bl, (%rcx)	# Introduzir ID da aposta no array dos premiados
		addq $1, %rcx
		addl $1, %r9d
	skip:
		addq $4, %rdi
		subl $1, %esi
		
		cmpl $0, %esi
		jne loop
		
		
	#end
		movl %r9d, %eax
		popq %rbx
		ret
