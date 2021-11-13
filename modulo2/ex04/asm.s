.section .data
	.global op1
	.global op2
	.equ CONST, 15
	
	op3:
		.quad 0
	op4:
		.quad 0
		
	.global op3
	.global op4
	
.section .text
	.global  sum
	sum:
		movl op1(%rip), %ecx
		movl op2(%rip), %eax
		addl %ecx, %eax
		ret
	
	.global sum_v2
	sum_v2:
		movq $0, %rax
		movl $CONST, %eax
		movl $CONST, %ecx
		subl op1(%rip), %eax
		subl op2(%rip), %ecx
		subl %ecx, %eax
		ret
		
	.global sum_v3
	sum_v3:
		pushq %rbx
		movl op1(%rip), %ebx
		movslq %ebx, %rbx
		movl op2(%rip), %ecx
		movslq %ecx, %rcx
		movq op3(%rip), %rdx
		movq op4(%rip), %rax
		addq %rdx, %rax
		subq %rcx, %rax
		addq %rbx, %rax
		popq %rbx
		ret
		
