#include <stdio.h>
#include "asm.h"



int main(void){
	printf("short (x) = %hd\n",0xA1B2);
	
	printf("test = %hhd\n\n", 0xC3);
	printf("y = %d\n\n", (char) 0xC3 + (short)0xA1B2);
	
	printf("result should be = %d\n\n", -24203 + (short) 0xA1B2);
	int res = call_incr();
	printf("result = %d\n",res);
}
