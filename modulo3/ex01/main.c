#include <stdio.h>
#include "asm.h"

char str1[] = "01032130";
char *ptr1 = str1;

int main(void){
	
	printf("%s\n", str1);

	int test = zero_count();
	
	printf("amount of '0': %d\n",test);
}
