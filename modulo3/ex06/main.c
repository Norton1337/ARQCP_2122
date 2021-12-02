#include <stdio.h>
#include "asm.h"

char string[] = "abcdefg";
char *ptr1 = string;

int main(void){
	
	printf("String: %s\n",string);
	int amount = encrypt();
	printf("%d changes, String: %s\n",amount,ptr1);
	
}
