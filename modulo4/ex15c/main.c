#include <stdio.h>
#include "activate_bits.h"



int main(void){
	int a = 0;
	int left = 31;
	int right = 0;
	int res = activate_invert_bits(a,left,right);
	printf("res = %ld\n",res);

}
