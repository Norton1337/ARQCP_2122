.section .data

	.equ DATA_SIZE, 56			#size of struct

.section .text

	.global checkRefrigerated
	checkRefrigerated:
		movl $0, %eax	
	
	loop:
		cmpl (%rdi), %edx		#this is X
		jne skip
		cmpl 4(%rdi), %ecx		#this is Y
		jne skip
		cmpl 8(%rdi), %r8d		#this is Z
		jne skip
		movl 32(%rdi), %eax		#this is where we check if the container is refrigerated
		jmp end
	skip:
	
		addq $DATA_SIZE, %rdi 	#go to next struct
		subl $1, %esi			
		cmpl $0, %esi			#if there are no more containers, exit loop
		jne loop
	end:	
		
		ret						#return 1 if container is refrigerated, 0 otherwise
