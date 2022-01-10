#include <stdio.h>
#include "asm.h"

char array1[] = "asd";
char array2[] = "qwe";
char *ptr1 = array1;
char *ptr2 = array2;
int num = 3;

int main(void){
	
	printf("Array1 before: %s\n", array1);
	printf("Array2 before: %s\n", array2);
	
	swaps();
	
	printf("Array1 after: %s\n", array1);
	printf("Array2 after: %s\n", array2);
	
}
