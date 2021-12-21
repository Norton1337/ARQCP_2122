#include <stdio.h>
#include "asm.h"

#define size 5

int arraySrc[] = {5,4,3,2,1};
int *ptrsrc = arraySrc;
int num = size;
int arrayDest[size];
int *ptrdest = arrayDest;

int main(void){
	
	int newSize = sort_without_reps();

	for(int i=0;i<num;i++){
		printf("%d\n",*(ptrsrc+i));
	}
	printf("\nnew Size: %d\n\n",newSize);
	
	for(int i=0;i<newSize;i++){
		printf("%d\n",*(ptrdest+i));
	}

}
