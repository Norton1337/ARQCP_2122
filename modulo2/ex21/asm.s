.section .data


.section .text
	.global new_salary
	new_salary:
		movl currentSalary(%rip), %eax
		movl code(%rip), %ecx
		addl $100, %eax
		cmp $10, %ecx
		je is10
		cmp $11, %ecx
		je is11
		cmp $12, %ecx
		je is12
		jmp end
	is10:
		addl $50, %eax
	is11:
		addl $100, %eax
	is12:
		addl $50, %eax
	end:
		ret
