.section .data


.section .text
	.global calc
	calc:
		pushq %rbp 
		movq %rsp, %rbp
		subq $4, %rsp 
		
		movq (%rsi), %rax
		subl %edi, %eax
		movl %eax, -4(%rbp)
	
		movl -4(%rbp), %eax
		imull %edx
		subl $2, %eax
		
		movq %rbp , %rsp
		popq %rbp
		ret
