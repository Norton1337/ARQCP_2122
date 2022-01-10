.section .data

.section .text
	.global pontuacao
	pontuacao:
		pushq %rbx
		movl $3, %eax
		movl $8, %ebx
		movq $0, %r8
		movq $0, %rcx
		movq $0, %rdx
		
	myloop_1_2_3:
		movl %edi, %ecx
		ANDl $1, %ecx
		cmpl $1, %ecx
		jne notEqual	
		addl $1, %edx
	notEqual:
		subl $1, %ebx
		SHR $1, %edi
		cmpl $0, %ebx
		jg myloop_1_2_3
		addl %edx, %edx
		cmpl $3, %edx
		jl notAproved
		movl $8, %ebx
		addl %edx, %r8d
		movl $0, %edx
		subl $1, %eax
		cmpl $0, %eax
		jg myloop_1_2_3
		
		movl $2, %eax
		
	myloop_4_5:
		movl $0xF, %ebx
		ANDl %edi, %ebx
		subl $1, %eax
		
		cmpl $3, %ebx
		jl notAproved
		subl $1, %ebx
		addl %ebx, %r8d
		movl $0, %ebx
		SHR $4, %edi
		cmpl $0, %eax
		jg myloop_4_5
		
		movl %r8d, %eax
		jmp end
	
	notAproved:
		movq $0, %rax
		
	end:
		popq %rbx
		ret
	
