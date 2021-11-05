.section .data
	.global op1
	.global op2
	.equ CONST, 15
	
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
		
