#include <stdio.h>
#include "activate_bit.h"



int main(void){
	int number = 1;
	int res = activate_bit(&number,4);
	printf("number = %d\n",number);
	printf("result = %d\n",res);

}
