#include <stdio.h>
#include "asm.h"

long even = -1;
int array[] = {-1,0,3,4,5,6};
int *ptrvec = array;
int num = 6;
int main(void){
	
	int isEven = test_even();
	printf("%d\n",isEven);
	 
	int sumEven = vec_sum_even();
	printf("%d\n", sumEven);
}
