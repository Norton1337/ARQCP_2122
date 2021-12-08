.section .data
	.global ptrvec
	.global num
	.global x
	
.section .text
	.global exists
	exists:
		pushq %rbx
		movq $0, %rax
		movq $0, %rbx
		movq $0, %rdx
		movq ptrvec(%rip), %rdi
		movl num(%rip), %ecx
		movw x(%rip), %dx
	loop:
		cmpw $2, %ax
		je repeats
		cmpl $0, %ecx
		je noRepeat
		movw (%rdi), %bx
		cmp %dx, %bx
		je increment
		addq $2, %rdi
		subl $1, %ecx
		jmp loop
	increment:
		addw $1, %ax
		addq $2, %rdi
		subl $1, %ecx
		jmp loop
	noRepeat:
		movq $0, %rax
		jmp end
	repeats:
		movl $1, %eax
	end:
		popq %rbx
		ret
		
		
	.global vec_diff
	vec_diff:
		pushq %rbx
		movq $0, %rax
		movq $0, %rbx
		movq $0, %rdx
		movq $0, %r8
		movl num(%rip), %ecx
		movq ptrvec(%rip), %rsi

	loop1:
		cmp $0, %ecx
		je end1
		movw (%rsi), %bx
		movw %bx, x(%rip)
		pushq %rcx
		call exists
		popq %rcx
		cmpl $0, %eax
		je notRepeated
		addq $2, %rsi
		subl $1, %ecx
		jmp loop1
		
	notRepeated:
		addl $1, %r8d
		addq $2, %rsi
		subl $1, %ecx
		jmp loop1
		
		
		
		
	end1:
		movl %r8d, %eax
		popq %rbx
		ret
		
		
		
