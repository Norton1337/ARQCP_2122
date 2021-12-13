#include <stdio.h>
#include "asm.h"


int main(void){
	int smaller = 0;
	int sum = sum_smaller(-1, -2, &smaller);

	
	printf("sum: %d\n",sum);
	printf("smaller: %d\n",smaller);
}
