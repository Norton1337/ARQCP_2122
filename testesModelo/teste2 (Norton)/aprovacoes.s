.section .data

.section .text
	.global aprovados
	aprovados:
		pushq %rbx
		movl $0, %ecx
		
	loop:
		movl (%rdi), %ebx
		
		pushq %rdi
		pushq %rcx
		pushq %rdx
		movl %ebx, %edi
		call pontuacao
		popq %rdx
		popq %rcx
		popq %rdi
				
		
		cmpl $39, %eax
		jl skip
		movl %eax, (%rdx)
		addq $4, %rdx
		addl $1, %ecx
	skip:
		subl $1, %esi
		addq $4, %rdi
		cmpl $0, %esi
		jg loop
		
	end:
		movl %ecx, %eax
		popq %rbx
		ret
