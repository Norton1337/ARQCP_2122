.section .data
	.global ptr1
	.global ptr2
	.global ptr3

.section .text
	.global str_cat
	str_cat:
		 movq ptr1(%rip), %rsi
		 movq ptr2(%rip), %rdi
		 movq ptr3(%rip), %rdx
		 
	loop1:
		movb (%rsi), %cl
		cmpb $0, %cl
		je loop2
		movb %cl, (%rdx)
		incq %rsi
		incq %rdx
		jmp loop1
		
	loop2:
		movb (%rdi), %r9b
		cmpb $0, %r9b
		je end
		movb %r9b, (%rdx)
		incq %rdi
		incq %rdx
		jmp loop2
	end:
		ret
