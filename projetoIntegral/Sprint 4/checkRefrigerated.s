.section .data

	.equ DATA_SIZE, 304
	.equ NUMBER_OFFSET, 0
	.equ TYPE_OFFSET,12

.section .text

	.global checkRefrigerated
	checkRefrigerated:
	
		movl $0, %eax
		
		leaq (%rdi,%rsi,8), %rdi
		leaq (%rdi,%rdx,8), %rdi		
		leaq (%rdi,%rcx,8), %rdi
		
		
		
	
	end:	
		movq %r8, %rax
		ret
