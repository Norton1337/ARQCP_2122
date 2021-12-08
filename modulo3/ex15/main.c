#include <stdio.h>
#include "asm.h"

int array[] = {257};
int num = 1;
int *ptrvec = array;

int main(void){
	
	int sum = sum_first_byte();
	printf("%d\n",sum);
}
