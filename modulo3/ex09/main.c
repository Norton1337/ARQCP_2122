#include <stdio.h>
#include "asm.h"

short array[] = {1,2,7,4,5};
short *ptrvec = array;
short x = 7;
int num = 5;
int main(void){
	
	short *pointer = vec_search();
	printf("pointer: %hd\n",*(pointer));
	
}
