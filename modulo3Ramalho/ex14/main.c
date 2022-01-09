#include <stdio.h>
#include "asm.h"

short x = 1;
short array[] = {1,2,3,4,2,2,4,3};
int num = 8;
short *ptrvec = array;

int main(void){
	int numAppearences = 0;
	
	printf("Array:\n");
	for(int i = 0; i < num; i++){
		printf("%d\t", array[i]);
	}
	
	numAppearences = exists();
	
	if(numAppearences == 1){
		printf("\nThe number %hd appeares more than once in the array.", x);
	}else if(numAppearences == 0){
		printf("\nThe number %hd does not appear more than once in the array.", x);
	}
	
}
