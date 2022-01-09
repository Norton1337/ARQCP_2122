#include <stdio.h>
#include "asm.h"

char str[] = "asd";
char *ptr1 = str;
char str2[] = "fgh";
char *ptr2 = str2;
char str3[80];
char *ptr3 = str3;

int main(void){
	
	printf("String1 : %s\nString2 : %s\n", str,str2);
	
	str_cat();
	printf("String concatenated: %s\n", str3);
	
}
