.section .data


.section .text
	.global test_equal
	test_equal:
		pushq %rbx
		movq $1, %rax
	loop:
		
		movb (%rdi), %bl
		movb (%rsi), %bh
		cmpb %bl, %bh
		je skip
		je skip
		movq $0, %rax
		jmp end
	skip:
		incq %rdi
		incq %rsi
		cmpb $0, %bl
		je end
		jmp loop

	end:
	
		popq %rbx
		ret
