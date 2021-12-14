#include <stdio.h>
#include "asm.h"


int main(void){
	int b = 4;
	int result = calc(2, &b, 3);
	printf("result: %d\n",result);
	
}
