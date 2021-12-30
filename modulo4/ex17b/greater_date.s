.section .data

.section .text

	.global greater_date
	greater_date:
		pushq %rbx
		movl $0, %ebx
		movl $8, %eax
		movl $0, %edx
		movl $0, %r10d
		movl $23, %r11d
		
	loop:
		movl $1, %edx
		movb %al, %cl
		SHL %cl, %edx
		OR %edx, %ebx
		addl $1, %eax
		cmpl %r11d, %eax
		jl loop
		je loop
		
		addl $1, %r10d
		
		movl %edi, %r8d
		AND %ebx, %r8d
		movl %esi, %r9d
		AND %ebx, %r9d
		
		cmpl %r9d, %r8d
		jg date1IsGreater
		jl date2IsGreater
		
		
		movl $0, %ebx
		movl $24, %eax
		movl $0, %edx
		movl $31, %r11d
		
		cmpl $1, %r10d 
		je loop
		
		movl $0, %ebx
		movl $0, %eax
		movl $0, %edx
		movl $7, %r11d
		
		cmpl $2, %r10d 
		je loop

	date1IsGreater:
		movl %edi, %eax
		jmp end
	date2IsGreater:
		movl %esi, %eax
	end:
		popq %rbx
		ret
