.section .data


.section .text
	.global aprovados
	aprovados:
		pushq %rbx
		movl $0, %ecx
	loop:
		cmpl $0, %esi
		je end
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
		jg aproved
		addq $4, %rdi
		subl $1, %esi
		jmp loop
		
	aproved:
		movl %eax, (%rdx)
		addl $1, %ecx
		subl $1, %esi
		addq $4, %rdi
		addq $4, %rdx
		cmpl $0, %esi
		jg loop
		
	end:
		movl %ecx, %eax
		popq %rbx
		ret
		
		
