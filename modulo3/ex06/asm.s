.section .data
	.global ptr1
	
.section .text
	.global encrypt
	encrypt:
		movq ptr1(%rip), %rdi
		movq $0, %rax
	loop:
		
		movb (%rdi), %cl
		cmpb $0, %cl
		je end
		cmpb $'a', %cl
		je skip
		cmpb $' ', %cl
		je skip
		addb $2, %cl
		movb %cl, (%rdi)
		incl %eax
		incq %rdi
		jmp loop
	skip:
		incq %rdi
		jmp loop
	end:
		ret
