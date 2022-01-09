.section .data
	.global ptr1
	.global ptr2
	.global num
	
.section .text
	.global swaps
	swaps:
		movq $0, %r9
		movq $0, %r8
		movq ptr1(%rip), %rsi
		movq ptr2(%rip), %rdi
		movl num(%rip), %ecx
		
	loop:
		cmpl $0, %ecx
		je end
		movb (%rsi), %r9b
		movb (%rdi), %r8b
		movb %r9b, (%rdi)
		movb %r8b, (%rsi)
		incq %rsi
		incq %rdi
		subl $1, %ecx
		jmp loop
	
	end:
		ret
