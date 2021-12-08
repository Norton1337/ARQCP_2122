#include <stdio.h>
#include "asm.h"


int array[] = {1,2,3,4,5};
int *ptrvec = array;
int num = 5; 
int main(void){
	
	
	int res = sort_without_reps();
	printf("%d\n",res);
	/*
	for(int i=0;i<num;i++){
		printf("%d\n",*(ptrvec+i));
	}
	*/
}
