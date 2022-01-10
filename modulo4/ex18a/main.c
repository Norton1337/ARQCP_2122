#include <stdio.h>
#include "changes.h"


int main(void){
	int num = -1;
	
	changes(&num);

	printf("result = %d\n",num);
}
