.section .data
	.global ptr1
	.global ptr2
	
.section .text
	.global str_copy_porto2
	str_copy_porto2:
		movq ptr1(%rip), %rsi
		movq ptr2(%rip), %rdi
		movl $0, %eax
	loop:
		movb (%rsi), %cl
		cmpb $'v', %cl
		je change_to_b
		cmpb $'V', %cl
		je change_to_b_upper
		movb %cl, (%rdi)
		cmpb $0, %cl
		je end
		incq %rsi
		incq %rdi
		jmp loop
	change_to_b:
		movb $'b', (%rdi)
		incq %rsi
		incq %rdi
		jmp loop
	change_to_b_upper:
		movb $'B', (%rdi)
		incq %rsi
		incq %rdi
		jmp loop
	end:
		ret
