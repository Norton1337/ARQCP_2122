#include <stdio.h>
#include "asm.h"


int main(void){
	int x = 3;
	int *v1 = &x;
	int v2 = 5;
	
	int result = inc_and_square(v1,v2);
	
	printf("Result: %d\t%d\n",x,result);
}
