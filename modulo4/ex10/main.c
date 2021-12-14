#include <stdio.h>
#include "asm.h"



int main(void){

	int res = call_incr();
	printf("result = %d\n",res);
}
