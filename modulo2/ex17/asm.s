.section .data


.section .text
	.global sum
	sum:
		movl num1(%rip), %eax
		movl num2(%rip), %ecx
		addl %ecx, %eax
		ret
	
	
	.global subtraction
	subtraction:
		movl num1(%rip), %eax
		movl num2(%rip), %ecx
		subl %ecx, %eax
		ret


	.global multiplication
	multiplication:
		movl num1(%rip), %eax
		movl num2(%rip), %ecx
		mull %ecx
		ret
	
	
	.global division
	division:
		movl num1(%rip), %eax
		cdq
		movl num2(%rip), %ecx
		cmp $0, %ecx
		je isZero1
		divl %ecx
		jmp end1
	isZero1:
		movl $0, %eax
	end1:
		ret
		
		
	.global modulus
	modulus:
		movl num1(%rip), %eax
		cdq
		movl num2(%rip), %ecx
		cmp $0, %ecx
		je isZero2
		divl %ecx
		movl %edx, %eax
		
		jmp end2
	isZero2:
		movl $0, %eax
	end2:
		ret
	
	
	.global powerOf2
	powerOf2:
		movl num1(%rip), %eax
		mull %eax
		ret
	
	
	.global powerOf3
	powerOf3:
		movl num1(%rip), %eax
		movl num1(%rip), %ecx
		mull %eax
		mull %ecx
		ret
