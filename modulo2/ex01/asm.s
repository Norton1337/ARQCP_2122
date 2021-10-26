.section .data
	.global op1
	.global op2
	.global res
	
.section .text
	.global sum 	# void sum(void)
	sum:
		mov1 op1(%rip), %ecx #place op1 in ecx
		mov1 op2(%rip), %eax #place op2 in eax
		add1 %ecx, %eax      #add ecx to eax. Result is in eax
		mov1 %eax, res(%rip) #copy the result to res
		ret
