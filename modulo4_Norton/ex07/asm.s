.section .data


.section .text
	.global count_even
	count_even:
		pushq %rbx
		movq $0, %rax
		movq $0, %rcx
		movq $0, %rdx
		movw $2, %bx
		movl %esi, %r8d
	loop:
		cmpl $0, %r8d
		je end
		movw (%rdi), %ax
		cdq
		idivw %bx
		cmp $0, %edx
		jg skip
		addl $1, %ecx
	skip:
		subl $1, %r8d
		addq $2, %rdi
		jmp loop
	end:
		movl %ecx, %eax
		popq %rbx
		ret
