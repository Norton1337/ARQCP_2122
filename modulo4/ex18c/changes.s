.section .data

.section .text

	.global changes
	changes:
		pushq %rbx
		pushq %rdi
		movl $0, %ebx
		movl $1, %eax
		movb $4, %cl
		
		SHL %cl, %eax
		subl $1, %eax
		movb $20, %cl
		SHL %cl, %eax
		
		AND (%rdi), %eax
		SHR %cl, %eax
		cmpl $7, %eax
		je end
		jl end
		
		movb $0, %bl
		
	loop:
		movl $1, %eax
		movb $20, %cl
		addb %bl, %cl
		SHL %cl, %eax
		XOR %eax, (%rdi)
		addb $1, %bl
		cmpb $4, %bl
		jl loop
		
	end:
		popq %rdi
		popq %rbx
		ret
		
	.global changes_vec
	changes_vec:
	
	loop2:
		
		call changes
		addq $4, %rdi
		subl $1, %esi
		cmpl $0, %esi
		jg loop2

		ret
