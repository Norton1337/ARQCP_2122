#include <stdio.h>
#include "asm.h"

short current = 10;
short desired = 12;

int main(void){

	int testNeededTime = needed_time();
	
	printf("needed_time = %d seconds\n", testNeededTime);
}
