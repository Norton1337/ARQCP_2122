#include <stdio.h>
#include "asm.h"

long array[] = {10,10,10,10,10};
int num = 5;
long *ptrvec = array;

int main(void){
	
	int amount = vec_greater20();
	
	printf("amount greater 20: %d\n",amount);
	
	
}
