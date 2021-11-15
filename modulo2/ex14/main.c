#include <stdio.h>
#include "asm.h"

int main(void){
	printf("Insert base:");
	scanf("%d",&base);
	printf("Insert height:");
	scanf("%d",&height);
	
	int test = getArea();
	printf("getArea = %hhd",test);
}
