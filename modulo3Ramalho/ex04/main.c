#include <stdio.h>
#include "asm.h"


int num = 5;
long array[] = {1,2,3,4,5};
long *ptrvec = array;

int main(void){
	int i = 0;
	
	
	for(i = 0; i < num; i++){
		printf("Array before: %ld\n", array[i]);
		
	}
	
	vec_add_one();
	
	for(i = 0; i < num; i++){
		printf("Array after: %ld\n", array[i]);
		
	}


}
