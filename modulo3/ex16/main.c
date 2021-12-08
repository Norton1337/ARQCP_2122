#include <stdio.h>
#include "asm.h"

char array1[] = "test";
char array2[] = "abcd";
int num = 4;
char *ptr1 = array1;
char *ptr2 = array2;

int main(void){
	
	swap();
	printf("%s\n",array1);
	printf("%s\n",array2);
}
