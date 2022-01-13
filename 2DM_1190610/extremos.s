.section .data


.section .text
	.global extremos
	extremos:
			movq $0, %r8
			movq $20, (%rcx) #nota minima
			movq $0, (%rdx) #nota maxima
			#movl (%edi, %ebx, 4), %edi
		loop:
			cmpl $0, %edi
			je end
			
			pushq %rdi
			pushq %rsi
			pushq %rdx
			pushq %rcx
			pushq %r8
			call nota_final
			popq %r8
			popq %rcx
			popq %rdx
			popq %rsi
			popq %rdi
			
			cmpw %ax, (%rcx)
			jge isMinimum
			cmpw %ax, %r9w
			jle isMaximum
			
			cmpw $10, %ax
			jg isPositive
			addq $4, %rdi
			subl $1, %esi
			jmp loop
			
		isMinimum:
			movw %ax, (%rcx)
			cmpw $10, (%rcx)
			jge isPositive
			addq $4, %rdi
			subl $1, %esi
			jmp loop
			
		isMaximum:
			movw %ax, (%rdx)
			cmpw $10, (%rdx)
			jge isPositive
			addq $4, %rdi
			subl $1, %esi
			jmp loop
		
		isPositive:
			addl $1, %r8d
			addq $4, %rdi
			subl $1, %esi
			jmp loop
		
		end:
			movl %r8d, %eax
			ret
