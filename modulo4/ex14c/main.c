#include <stdio.h>
#include "activate_bit.h"



int main(void){
	int number = 1;
	activate_2bits(&number,4);
	printf("number = %d\n",number);
	

}
