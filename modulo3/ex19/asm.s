.section .data
	.global ptrgrades
	.global num
	.global ptrfreq
	
.section .text
	.global frequencies
	frequencies:
		pushq %rbx
		movq $0, %rax
		movq ptrgrades(%rip), %rsi
		movq ptrfreq(%rip), %rdi
		movl num(%rip), %ecx
	loop:
		cmpl $0, %ecx
		je end
		movb (%rdi), %bl
		movsbq %bl, %rax
		movl $2, %ebx
		mull %ebx
		addq %rax, %rsi
		addb $1, (%rsi)
		subq %rax, %rsi
		addq $1, %rdi
		subl $1, %ecx
		jmp loop
	end:
		popq %rbx
		ret
