#include <stdio.h>
#include "asm.h"

short array[] = {100,2,101,3,105,4};
short *ptrvec = array;
int num = 6;

int main(void){
	int i = 0;
	
	
	printf("Array before:\n");
	for(i = 0; i < num; i++){
		printf("%hd\t", array[i]);
	}
	unsigned char changedElem = vec_zero();
	printf("Elements changed: %hhd\n", changedElem);
	printf("Array after:\n");
	for(i = 0; i < num; i++){
		printf("%hd\t", array[i]);
	}

}
