.section .data


.section .text
	.global sum_n
	sum_n:
		movl $0, %ecx
		movl $0, %eax
		cmp $0, %edi
		jle end
	loop:
		cmpl %ecx, %edi
		je end
		addl $1, %ecx
		addl %ecx, %eax
		jmp loop
	end:
		ret
