.section .data


.section .text
	.global count_even
	count_even:
		movl %esi, %r9d
		movq $0, %rax
		movq $0, %r8
		movw $2, %cx
	loop:
		cmpl $0, %r9d
		je end
		movw (%rdi), %ax
		cdq
		idivw %cx
		cmpl $0, %edx
		je isEven
		subl $1, %r9d
		addq $2, %rdi
		jmp loop
	isEven:
		addl $1, %r8d
		subl $1, %r9d
		addq $2, %rdi
		jmp loop
			
	end:
		movl %r8d, %eax
		ret
