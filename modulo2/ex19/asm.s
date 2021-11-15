.section .data


.section .text
	.global needed_time
	needed_time:
		pushq %rbx
		movw current(%rip), %bx
		movw desired(%rip), %ax
		subw %bx, %ax
		cmp $0, %ax
		jg moreTemp
		jl lessTemp
		movl $0, %eax
		jmp end	
	moreTemp:
		movswl %ax, %eax
		movl $2, %ecx
		imull %ecx
		jmp end
	lessTemp:
		movw current(%rip), %bx
		movw desired(%rip), %ax
		subw %ax, %bx
		movw %bx, %ax
		movswl %ax, %eax
		movl $3, %ecx
		imull %ecx
	end:
		movl $60, %ecx
		imull %ecx
		popq %rbx
		ret
