#include <stdio.h>
#include "odd_sum.h"

int main(){

	int p[]= {8,6,8,5,3,7,9,2,5};
	
	int sum = odd_sum(p);
	printf("sum = %d\n",sum);
}
