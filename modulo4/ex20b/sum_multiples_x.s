#int sum_multiples_x(char *vec, int x){
#	int total = 0;
#	char temp = 0;
#	temp = (x>>8) | temp;
#	
#	for(int i=0;vec[i]!='\0';i++){
#		if(vec[i]%temp==0){
#			total+=vec[i];
#		}
#	}
#	
#	return total;
#	
#}

.section .data

.section .text
	.global sum_multiples_x
	sum_multiples_x:
		pushq %rbx
		movq $0, %r8
		movb $0, %bl
		movb $8, %cl
		SHR %cl, %esi
		ORb %sil, %bl
	
	loop:
		cmpb $0, (%rdi)
		je end
		movq $0, %rax
		movb (%rdi), %al
		divb %bl
		cmpb $0, %ah
		jg skip
		jl skip
		addb (%rdi), %r8b
	skip:
		addq $1, %rdi
		jmp loop
	
	end:
		movq $0, %rax
		movb %r8b, %al
		popq %rbx
		ret
