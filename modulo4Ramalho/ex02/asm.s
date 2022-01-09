.section .data


.section .text
	.global sum_n
	sum_n:
		movl %edi, %edx
		movl $1, %eax
		movl $2, %ecx
	
	loop:
		cmpl %edx, %ecx
		je end
		addl %ecx, %eax #1 = 1 + 2
		addl $1, %ecx
		jmp loop
		
		
	end:
		ret
