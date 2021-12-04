#include <stdio.h>
#include "asm.h"

char string1[] = "test";
char string2[] = "ing";
char string3[40];
char *ptr1 = string1;
char *ptr2 = string2;
char *ptr3 = string3;
int main(void){
	
	
	str_cat();
	printf("%s\n",string3);
}
