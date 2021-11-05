#include <stdio.h>
#include "asm.h"

int op1=0, op2=0;

int main(void){
	int res;
	printf("Valor op1:");
	scanf("%d", &op1);
	printf("Valor op2:");
	scanf("%d", &op2);
	printf("Valor op3:");
	scanf("%ld", &op3);
	printf("Valor op4:");
	scanf("%ld", &op4);
	res=sum();
	int test=sum_v2();
	long test1=sum_v3();
	printf("sum_v3 = %ld\n",test1);
	printf("sum_v2 = %d\n",test);
	printf("sum = %d:0x%x\n", res,res);
	return 0;
}
