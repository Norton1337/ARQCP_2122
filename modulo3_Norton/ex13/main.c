#include <stdio.h>
#include "asm.h"

int array[] = {50,-60,70,80};
unsigned short num = 4;
int *ptrvec = array;

int main(void){
		
	keep_positives();
	
	for(int i = 0;i<num;i++){
		
		printf("%d ", *(ptrvec+i));
		
	}	
	
}
