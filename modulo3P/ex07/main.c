#include <stdio.h>
#include "asm.h"

char string[] = "abcdefg";
char *ptr1 = string;

int main(void){
	
	printf("String: %s\n",string);
	int amount = encrypt();
	printf("%d changes, Encrypted: %s\n",amount,ptr1);
	int amount2 = decrypt();
	printf("%d changes, Decrypted: %s\n",amount2,ptr1);
	
}
