#include <stdio.h>
#include "count_bits_zero.h"



int main(void){
	int array[] = {0, -6, 5};	
	int *ptr = array;
	int res = vec_count_bits_zero(ptr, 3);
	printf("result = %d\n",res);

}
