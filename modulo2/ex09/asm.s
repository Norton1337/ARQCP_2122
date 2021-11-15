.section .data


.section .text
	.global sum_and_subtract
	sum_and_subtract:

		pushq %rbx
		
		movsbq A(%rip), %rbx
		movswq B(%rip), %rcx
		movslq C(%rip), %rax
		movslq D(%rip), %rdx
		
		addq %rbx, %rax
		subq %rdx, %rax
		addq %rcx, %rax
		
		popq %rbx

		ret
		
