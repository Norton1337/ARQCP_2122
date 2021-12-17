.section .data


.section .text
	.global count_bits_zero
	count_bits_zero:
		pushq %rbx
		movq $0, %rax
		movq $0, %rcx
		
	loop:
		cmpl $32, %ecx
		je end
		movl %edi, %ebx
		AND $1, %ebx
		cmpl $0, %ebx
		je isZero
		addl $1, %ecx
		SAR %edi
		jmp loop
		
	isZero:
		addl $1, %eax
		addl $1, %ecx
		SAR %edi
		jmp loop
	
	end:
		popq %rbx
		ret

	.global vec_count_bits_zero
	vec_count_bits_zero:
		pushq %rbx
		movq $0, %rax
		movq $0, %rbx
		
	vecLoop:
		cmpl $0, %esi
		je vecEnd
		movl (%rdi), %edx
		pushq %rbx
		pushq %rdi
		movl %edx, %edi
		call count_bits_zero
		popq %rdi
		popq %rbx
		addl %eax, %ebx
		subl $1, %esi
		addq $4, %rdi
		jmp vecLoop
		
	vecEnd:
		movl %ebx, %eax
		popq %rbx
		ret
