.section .data


.section .text
	.global fs
	fs:
		pushq %rbx
		
		movl i(%rip), %ebx
		movl j(%rip), %ecx
		
		cmp %ebx, %ecx
		je isEqual
		addl %ecx, %ebx
		subl $1, %ebx
		movl %ebx, %eax
		jmp end1
	isEqual:
		subl %ecx, %ebx
		addl $1, %ebx
		movl %ebx, %eax
	end1:		
		popq %rbx
		ret
	
	.global fs2
	fs2:
		pushq %rbx
		movl i(%rip), %ebx
		movl j(%rip), %ecx
		
		cmp %ebx, %ecx
		jl isLess1
		addl $1, %ecx
		jmp end2
	isLess1:
		subl $1, %ebx
	end2:
		movl %ecx, %eax
		imull %ebx
		popq %rbx
		ret
	
	.global fs3
	fs3:
		pushq %rbx
		movl i(%rip), %ebx
		movl j(%rip), %ecx
		cmp %ebx, %ecx
		jg isLess2
		movl %ebx, %eax
		imull %ecx
		movl %eax, %ecx
		addl $1, %ebx
		movl %ebx, %eax
		
		jmp end
	isLess2:
		addl %ebx, %ecx
		addl %ecx, %ebx
		addl $2, %ebx
		movl %ebx, %eax
	end:
		cdq
		divl %ecx
		popq %rbx
		ret
		
	.global fs4
	fs4:
		pushq %rbx
		movl i(%rip), %ebx
		movl j(%rip), %ecx
		
		addl %ebx, %ecx
		cmp $10, %ecx
		jl isLess3
		movl j(%rip), %ecx
		movl %ecx, %eax
		imull %ecx
		cdq
		movl $3, %ebx
		idivl %ebx
		jmp end4
	isLess3:
	
		movl %ebx, %eax
		imull %ebx
		movl $4, %ebx
		imull %ebx
	end4:
		popq %rbx
		ret
