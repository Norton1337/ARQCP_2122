#include <stdio.h>
#include "asm.h"
char A=0;
short B=1;
int C=0;
int D=0;
int main(void){
	
	long test = sum_and_subtract();
	printf("sum_and_subtract = %ld",test);
}
