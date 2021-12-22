.section .data

.section .text
	.global activate_bit
	activate_bit:
		pushq %rbx
		movl (%rdi), %ebx
		movl (%rdi), %edx
		movb %sil, %cl
		SHRl %cl, %edx 
		OR $1, %edx
		SHLl %cl, %edx
		
		OR %ebx, %edx
		
		movl $0, %eax
		cmpl %ebx, %edx
		je end
		movl $1, %eax
	end:
		movl %edx, (%rdi)
		popq %rbx
		ret
