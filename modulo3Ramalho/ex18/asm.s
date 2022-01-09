.section .data
	.global ptrsrc
	.global ptrdest
	.global num

.section .text
	.global sort_without_reps
	sort_without_reps:
		movq ptrsrc(%rip), %rsi
		movq ptrdest(%rip), %rdi
		movl num(%rip), %edx
		
	loop:
		cmpl $0, %edx
		movl (%rsi), %ecx
		movl (%rsi + 1), %r9d
		cmpl 

	loop2:
		
