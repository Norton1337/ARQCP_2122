#include <stdio.h>
#include "asm.h"
char op1=5;
char op2=5;
int main(void){
	
	long test = test_flags();
	printf("test_flags = %hhd",test);
}
