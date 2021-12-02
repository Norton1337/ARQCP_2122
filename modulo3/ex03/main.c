#include <stdio.h>
#include "asm.h"

char str1[] = "overVivid";
char *ptr1 = str1;
char str2[] = "";
char *ptr2 = str1;

int main(void){
	
	printf("before: %s\n",str1);
	str_copy_porto2();
	printf("after: %s\n",str1);
}
