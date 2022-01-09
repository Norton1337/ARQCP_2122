#include <stdio.h>
#include "asm.h"


int main(void){
	short array[] = {10,2,3,4};
	int size = 4;
	int amount = count_even(array, size);
	printf("isEqual: %d\n",amount);
	
}
