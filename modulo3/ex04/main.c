#include <stdio.h>
#include "asm.h"

long array[] = {1,2,3,4,5};
long *ptrvec = array;
int num = 5;
int main(void){
	
	for(int i=0;i<num;i++){
		printf("array[%d]=%ld\n",i,array[i]);
	}
	vec_add_one();
	for(int i=0;i<num;i++){
		printf("array[%d]=%ld\n",i,array[i]);
	}
}
