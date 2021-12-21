.section .data
	.global ptr1
	.global ptr2
	.global num
	
.section .text
	.global swap
	swap:
		pushq %rbx
		movq $0, %rbx
		movq ptr1(%rip), %rsi
		movq ptr2(%rip), %rdi
		movl num(%rip), %ebx
	loop:
		cmpl $0, %ebx
		je end
		movb (%rdi), %cl
		movb (%rsi), %ch
		movb %ch, (%rdi)
		movb %cl, (%rsi)
		addq $1, %rdi
		addq $1, %rsi
		subl $1, %ebx
		jmp loop
	end:
		popq %rbx
		ret
