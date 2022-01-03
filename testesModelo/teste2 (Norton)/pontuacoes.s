.section .data

.section .text
	.global pontuacao
	pontuacao:
		pushq %rbx
		movq $0, %rax
		movl $3, %eax
		
		movq $0, %rbx
		movl $8, %ebx
		
		movq $0, %rcx
		movq $0, %rdx
		
		movq $0, %r8
	loop:
		movl %edi, %ecx
		ANDl $1, %ecx
		cmpl $1, %ecx
		jg skip
		jl skip
		addl $1, %edx
	skip:
		subl $1, %ebx
		SHR $1, %edi
		cmpl $0, %ebx
		jg loop
		addl %edx, %edx
		cmpl $3, %edx
		jl failed
		movl $8, %ebx
		subl $1, %eax
		addl %edx, %r8d
		movl $0, %edx
		cmpl $0, %eax
		jg loop
		
		movl $2, %eax
		
	loop2:
		movl $0xF, %ebx
		ANDl %edi, %ebx
		subl $1, %eax
		
		cmpl $3, %ebx
		jl failed
		subl $1, %ebx
		addl %ebx, %r8d
		movl $0, %ebx
		SHR $4, %edi
		cmpl $0, %eax
		jg loop2
		
		movl %r8d, %eax
		jmp end
		
		
	failed:
		movq $0, %rax
	end:
		
		popq %rbx
		ret
