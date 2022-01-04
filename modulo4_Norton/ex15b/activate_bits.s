#include <stdio.h>
#int activate_bits(int a, int left, int right){
#	
#	
#	int beforeLeft=a;
#	a=a>>31;
#	int i=0;
#	for(;i+left<31;i++){
#		a=(a<<1)|1;
#	}
#	
#	a=a<<(left+1);
#	a=beforeLeft|a;
#	int beforeRight=a;
#	a=a>>right;
#	
#	for(int i = 0; i<right; i++){
#		a=(a<<1)|1;
#	}
#	a=a|beforeRight;
#	return a;
#
#}

.section .data

.section .text
	.global activate_bits
	activate_bits:
		pushq %rbx
		movl %edi, %ebx
		movl $0, %r8d
		addl %esi, %r8d
		movb $31, %cl
		SHR %cl, %edi
		movb $1, %cl
		
	loopLeft:
		cmpl $31, %r8d
		je continue
		SHL %cl, %edi
		ORl $1, %edi
		addl $1, %r8d
		jmp loopLeft
		
	continue:
		addl $1, %esi
		movb %sil, %cl
		SHL %cl, %edi
		ORl %ebx, %edi
		
		movl %edi, %ebx
		movb %dl, %cl
		SHR %cl, %edi
		movl $0, %r8d
		movb $1, %cl
		
	loopRight:
		cmpl %edx, %r8d
		je end
		SHL %cl, %edi
		ORl $1, %edi
		addl $1, %r8d
		cmpl %edx, %r8d
		jmp loopRight
		
	end:
		ORl %ebx, %edi
		movl %edi, %eax
		popq %rbx
		ret
