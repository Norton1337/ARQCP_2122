#include <stdio.h>
#include "swap.h"

int main(){

	int size=10;
	int vec1[]={1,2,3,4,5,6,7,8,9,0};
	int vec2[]={4,6,3,7,9,8,2,1,4,5};
	
	swap(vec1,vec2,size);
	printf("vec1: \n");
	
	for(int i=0;i<size;i++)
		printf("%d ",vec1[i]);
	printf("\nvec2: \n");
	for(int i=0;i<size;i++)
		printf("%d ",vec2[i]);
	
}
