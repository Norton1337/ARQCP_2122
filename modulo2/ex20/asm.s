.section .data


.section .text
	.global check_num
	check_num:
		pushq %rbx
		movq $0, %rdx
		movl num(%rip), %eax
		cmp $0, %eax
		jl isNegative
		cdq
		movl $2, %ebx
		idivl %ebx
		cmp $0, %edx
		je isPositiveEven
		movq $0, %rax
		movb $4, %al
		jmp end
	isPositiveEven:
		movq $0, %rax
		movb $3, %al
		jmp end
	isNegative:
		cdq
		movl $2, %ebx
		idivl %ebx
		cmp $0, %edx
		je isNegativeEven
		movq $0, %rax
		movb $2, %al
		jmp end
	isNegativeEven:
		movq $0, %rax
		movb $1, %al
	end:
		popq %rbx
		ret
