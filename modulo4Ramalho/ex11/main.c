#include <stdio.h>
#include "asm.h"


int main(void){
	int result;
	
	result = call_proc();
	
	printf("Result: %d\n", result);
}
