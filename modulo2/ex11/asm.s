.section .data


.section .text
	.global test_flags
	test_flags:
		movb $0, %al
		movl op1(%rip), %ecx
		movl op2(%rip), %edx
		addl %edx, %ecx
		jc carry_detected
		jo overflow_detected
		jmp end
	carry_detected:
		movb $1, %al
		jmp end
	overflow_detected:
		movb $1, %al
	end:
		ret
		
