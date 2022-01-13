.section .data

.section .text
	.global nota_final
	nota_final:
		movl $8, %ecx
		pushq %rbx
		movq $0, %rax
		movq $0, %r9
		movq $0, %r8
		movl (%edi,  %ecx, 1), %ebx
		SHR $1, %ebx
		movl %ebx, %r8d
		movl $0xFFF, %r9d
		ANDl %r9d, %r8d #valor da frequencia guardada no %r8d
		
		movl (%edi,  %ecx, 1), %ebx
		SHR $13, %ebx
		ANDl %r9d, %ebx #valor do exame guardado no %ebx
		
		addl %r8d, %ebx #valor de frequencia + exame no ebx
		movl %ebx, %eax
		movl $2, %ecx
		divl %ecx
		movl %eax, %ebx
		movq $0, %rax
		movw %bx, %ax
		ret
		
