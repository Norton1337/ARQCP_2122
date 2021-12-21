#include <stdio.h>
#include "asm.h"



int main(void){
	
	int res = call_proc();
	printf("result = %d\n",res);
}
