#include <stdio.h>
#include "asm.h"


int main(void){
	short array[] = {1,2,3,4,1,2,6};
	int n = 7;
	
	int result = count_even(array,n);
	
	printf("Result: %d\t%d\n",result,n);
}
