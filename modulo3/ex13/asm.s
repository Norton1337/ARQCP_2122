.section .data
	.global ptrvec
	.global num
	
.section .text
	.global keep_positives
	keep_positives:
		pushq %rbx
		movw num(%rip), %bx
		movq ptrvec(%rip), %rdi
		movq $0, %rax
	loop:
		cmp $0, %bx
		je end
		movl (%rdi), %ecx
		cmpl $0, %ecx
		jl replace
		addl $1, %eax
		addq $4, %rdi
		subw $1, %bx
		jmp loop
		
	replace:
		movl %eax, (%rdi)
		addl $1, %eax
		addq $4, %rdi
		subw $1, %bx
		jmp loop
	
	end:
		popq %rbx
		ret
