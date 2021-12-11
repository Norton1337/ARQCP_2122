#include <stdio.h>
#include "asm.h"

#define size 5

int arraySrc[] = {5,4,3,2,1};
int *ptrsrc = arraySrc;
int num = size; 
int arrayDest[size];
int *ptrdest = arrayDest;
int main(void){
	
	
	int res = sort_without_reps();
	printf("%d\n\n",res);
	
	for(int i=0;i<num;i++){
		printf("%d\n",*(ptrdest+i));
	}
	
}
