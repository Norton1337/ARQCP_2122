#include <stdio.h>
#include "asm.h"

short array[] = {3,4,5,3};
int num = 4;
short *ptrvec = array;
short x=3;

int main(void){
		
	int test=vec_diff();
	
	printf("%d\n", test);
		
	
}
