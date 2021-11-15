#include <stdio.h>
#include "asm.h"
short s = 0;
int main(void){
	printf("Valor op1:");
	scanf("%hd", &s);
	
	short test=swapBytes();
	printf("swapBytes = %hd\n",test);
}
