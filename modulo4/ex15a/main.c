#include <stdio.h>
#include "activate_bits.h"



int main(void){
	int a = 5;
	int left = 5;
	int right = 3;
	int res = activate_bits(a,left,right);
	printf("res = %d\n",res);

}
