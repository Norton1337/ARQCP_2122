#include <stdio.h>
#include "asm.h"


char str[] = "EuVouAPraiav";
char *ptr1 = str;
char str2[12] = "";
char *ptr2 = str;

int main(void){
	
	printf("String before: %s", str);
	
	str_copy_porto();
	printf("\nString after: %s", str);
	
}
