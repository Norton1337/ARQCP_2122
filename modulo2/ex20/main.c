#include <stdio.h>
#include "asm.h"

int num=0;

int main(void){

	char testCheckNum = check_num();
	
	printf("check_num = %hhd\n", testCheckNum);
}
