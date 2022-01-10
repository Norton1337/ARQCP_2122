#include <stdio.h>
#include "changes.h"


int main(void){
	int num[] = {-1,2,1};
	int amount = 3;
	changes_vec(num,amount);

	printf("result = %d\n",*(num));
}
