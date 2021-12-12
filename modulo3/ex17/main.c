#include <stdio.h>
#include "asm.h"


int array[] = {1,1,1,1,2};
int *ptrvec = array;
int num = 5; 
int main(void){
	
	array_sort();

	for(int i=0;i<num;i++){
		printf("%d\n",*(ptrvec+i));
	}

}
