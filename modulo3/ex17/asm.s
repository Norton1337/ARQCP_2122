.section .data
	.global ptrvec
	.global num
	
.section .text
	.global array_sort
	array_sort:
		pushq %rbx
		
	end:
		popq %rbx
		ret
