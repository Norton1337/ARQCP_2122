#include <stdio.h>
#include "asm.h"


long even = 2;
int array[] = {1,2,3,4,5,6};
int *ptrvec = array;
int num = 6;
int main(void){
	int isEven = 0;
	int evenSum = 0;
	isEven = test_even();
	evenSum = vec_sum_even();
	if(isEven == 0){
		printf("The number %ld is odd.\n", even);
	} else if(isEven == 1){
		printf("The number %ld is even.\n", even);
	}
	printf("Array:\n");
	for(int i = 0; i < 6; i++){
		printf("%d\t",array[i]);
	}
	
	printf("\nThe sum of the even elements on the array is:%d\n", evenSum);
	
}
