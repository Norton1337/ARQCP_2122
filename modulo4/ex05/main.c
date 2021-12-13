#include <stdio.h>
#include "asm.h"


int main(void){
	int v1 = -1;
	int square = inc_and_square(&v1, -2);
	printf("square: %d\n",square);
	printf("inc: %d\n",v1);
	
}
