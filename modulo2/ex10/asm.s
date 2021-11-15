.section .data


.section .text
	.global sum2ints
	sum2ints:
		movslq op1(%rip), %rax
		movslq op2(%rip), %rcx
		addq %rcx, %rax
		ret
		
