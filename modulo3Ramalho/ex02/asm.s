.section .data
	.global ptr1
	.global ptr2

.section .text
	.global str_copy_porto
	str_copy_porto:
		pushq %rbx
		movq ptr1(%rip), %rdx
		movq ptr2(%rip), %rbx
		movl $0, %eax
	loop:
		movb (%rdx), %cl
		cmpb $'v', %cl
		je change_letter
		movb %cl, (%rbx)
		cmpb $0, %cl
		je end
		incq %rdx
		incq %rbx
		jmp loop
	change_letter:
		movb $'b', (%rbx)
		incq %rdx
		incq %rbx
		jmp loop
	end:
		popq %rbx
		ret
		
		
