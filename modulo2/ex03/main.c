#include <stdio.h>
#include "asm.h"

int op1=0, op2=0;

int main(void){
	int res;
	printf("Valor op1:");
	scanf("%d", &op1);
	printf("Valor op2:");
	scanf("%d", &op2);
	res=sum();
	int test=sum_v2();
	printf("sum_v2 = %d:0x%x\n",test,test);
	printf("sum = %d:0x%x\n", res,res);
	return 0;
}
