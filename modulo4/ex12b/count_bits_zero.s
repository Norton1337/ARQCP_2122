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
