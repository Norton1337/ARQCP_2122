#include <stdio.h>
#include "asm.h"


int main(void){
	char string1[] = "test2";
	char string2[] = "test2"; 
	int isEqual = test_equal(string1, string2);
	printf("isEqual: %d\n",isEqual);
	
}
