.section .data
	base:
		.int 0
	height:
		.int 0
	
	.global base
	.global height

.section .text
	.global getArea
	getArea:
	
		movq $0, %rdx
		
		movl base(%rip),%eax
		movl height(%rip), %ecx
		
		mull %ecx
		
		movl $2, %ecx
		divl %ecx

		ret
		
