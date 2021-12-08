#include <stdio.h>
#include "asm.h"


int array[] = {1,2,3,4,5,6};
int *ptrvec = array;
int num = 6; 
int main(void){
	
	array_sort();
	for(int i=0;i<num;i++){
		printf("%d\n",*(ptrvec+i));
	}
}
