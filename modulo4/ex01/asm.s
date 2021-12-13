.section .data


.section .text
	.global cube
	cube:
		movl %edi, %eax
		mull %edi
		mull %edi
	end:
		ret
