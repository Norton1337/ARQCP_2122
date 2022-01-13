#include <stdio.h>
#include "asm.h"



int array[] =  {1,2,3,4,5};
int *ptrvec = array;

int num = 5;


int main(void){

	int amount= count_seq();
	printf("%d\n",amount);

}
