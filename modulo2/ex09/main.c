#include <stdio.h>
#include "asm.h"
char A=1;
short B=2;
int C=3;
int D=4;
int main(void){
	
	long test = sum_and_subtract();
	printf("sum_and_subtract = %ld",test);
}
