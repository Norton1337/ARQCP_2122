.section .data
	.global ptr1

.section .text
	.global encrypt
	encrypt:
		movq ptr1(%rip), %rsi
		movq $0, %rax
	loop:
		movb (%rsi), %cl
		cmpb $0, %cl
		je end
		cmpb $'a', %cl
		je skip
		cmpb $' ', %cl
		je skip
		addb $2, %cl
		movb %cl, (%rsi)
		incl %eax
		incq %rsi
		jmp loop
		
	skip:
		incq %rsi
		jmp loop
	end:
		ret
