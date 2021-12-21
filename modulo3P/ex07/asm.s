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
		
		
	.global decrypt
	decrypt:
		movq ptr1(%rip), %rdi
		movq $0, %rax
	loop2:
		movb (%rdi), %cl
		cmpb $0, %cl
		je end2
		cmpb $'a', %cl
		je skip2
		cmpb $' ', %cl
		je skip2
		subb $2, %cl
		movb %cl, (%rdi)
		incl %eax
		incq %rdi
		jmp loop2
	skip2:
		incq %rdi
		jmp loop2
	end2:
		ret
