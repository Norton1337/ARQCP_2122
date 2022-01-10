#include <stdio.h>
#include "asm.h"


char str[] = "ola estas";
char *ptr1 = str;

int main(void){
	
	int count = 0;
	printf("String before:%s\n", str);
	
	count = encrypt();
	
	printf("Changed Characteres:%d\nString after:%s\n",count, ptr1);
	
}
