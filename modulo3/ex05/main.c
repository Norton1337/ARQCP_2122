#include <stdio.h>
#include "asm.h"

int array[] = {1,2,3,4,5};
int *ptrvec = array;
short num = 5;
int main(void){
	
	
	int sum = vec_sum();
	int avg = vec_avg();
	printf("sum = %d\n",sum);
	printf("avg = %d",avg);
	
}
