#include <stdio.h>
#include "asm.h"
int op1=5;
int op2=5;
int main(void){
	
	long test = sum2ints();
	printf("sum2ints = %ld",test);
}
