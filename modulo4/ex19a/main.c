#include <stdio.h>
#include "add_byte.h"


int main(void){
	char num = 5;
	int vec1[]={6,-1,255,-3841,-1793,0,4};
	int vec2[6];
	add_byte(num,vec1,vec2);

	
	printf("result = %d\n",*(vec2));
}
