.section .data


.section .text
	.global compute
	compute:
		pushq %rbx
		movq $0, %rax
		
		movl D(%rip), %eax
		cmp $0, %eax
		je end
		
		movl A(%rip), %eax
		cdq
		movl B(%rip), %ebx
		cdq
		
		
		imull %ebx
		movl C(%rip), %ecx
		addl %ecx, %eax
		
		movl D(%rip), %ecx
		idivl %ecx
		
		
	end:
	
		popq %rbx
		ret
		
