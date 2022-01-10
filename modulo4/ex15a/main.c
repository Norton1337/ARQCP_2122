#include <stdio.h>
#include "activate_bits.h"


int main(void){
	int a = 152;
	int left = 15;
	int right = 2;
	int res = activate_bits(a,left,right);
	printf("res = %d\n",res);

}
