#include <stdio.h>
#include "asm.h"

int main(void){
	//printf("Valor op1:");
	//scanf("%hd", &op1);
	//printf("Valor byte1:");
	//scanf(" %c",&byte1);
	//printf("Valor byte2:");
	//scanf(" %c",&byte2);
	//printf("Valor s1:");
	//scanf("%hd",&s1);
	//printf("Valor s2:");
	//scanf("%hd",&s2);
	
	s1=0x2233;
	s2=0x3322;
	
	//short test=swapBytes();
	//short test2=concatBytes();
	short test3=crossSumBytes();
	
	
	//printf("swapBytes = %hd",test);
	//printf("concatBytes = %hd",test2);
	printf("crossSumBytes = %hd",test3);
}
