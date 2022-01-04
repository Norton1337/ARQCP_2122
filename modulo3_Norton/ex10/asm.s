.section .data
	.global ptr1
	.global ptr2
	.global ptr3
	
.section .text
	.global str_cat
	str_cat:
		pushq %rbx
		movq ptr1(%rip), %rdi
		movq ptr2(%rip), %rcx
		movq ptr3(%rip), %rsi
		
	loopPtr1:
		movb (%rdi), %bl
		cmpb $0, %bl
		je loopPtr2
		movb %bl, (%rsi)
		incq %rdi
		incq %rsi
		jmp loopPtr1
	loopPtr2:
		movb (%rcx), %bl
		cmpb $0, %bl
		je end
		movb %bl, (%rsi)
		incq %rcx
		incq %rsi
		jmp loopPtr2
		
	end:
		popq %rbx
		ret
