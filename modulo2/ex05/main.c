#include <stdio.h>
#include "asm.h"

int main(void){
	printf("Valor op1:");
	scanf("%hd", &op1);
	
	short test=swapBytes();
	printf("swapBytes = %hd\n",test);
}
