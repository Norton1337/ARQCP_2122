#include <stdio.h>
#include "asm.h"
char byte1 = 1;
char byte2 = 0;
int main(void){
	//printf("Valor op1:");
	//scanf("%hd", &op1);

	//short test=swapBytes();
	short test2=concatBytes();
	//printf("swapBytes = %hd",test);
	printf("concatBytes = %hd\n",test2);
}
