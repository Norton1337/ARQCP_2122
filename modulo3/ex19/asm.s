.section .data
	.global ptrgrades
	.global num
	.global ptrfreq
	
.section .text
	.global frequencies
	frequencies:
		pushq %rbx
		movq $0, %rax
		movq $0, %rbx
		movq ptrgrades(%rip), %rdi
		movq ptrfreq(%rip), %rsi
		movl num(%rip), %ecx
		
	setZeros:
		movl $0, (%rsi)
		addq $1, %rsi
		addl $1, %ebx
		cmpl $21, %ebx
		jl setZeros
		
		subq %rbx, %rsi
	loop:
		cmpl $0, %ecx
		je end
		movb (%rdi), %bl
		movsbq %bl, %rax
		addq %rax, %rsi
		addb $1, (%rsi)
		subq %rax, %rsi
		addq $1, %rdi
		subl $1, %ecx
		jmp loop
	end:
		popq %rbx
		ret
