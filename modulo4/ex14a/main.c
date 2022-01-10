#include <stdio.h>
#include "activate_bit.h"



int main(void){
	int number = 6;
	int res = activate_bit(&number,4);
	printf("result = %d\n",res);

}
