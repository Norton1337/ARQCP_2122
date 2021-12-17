#include <stdio.h>
#include "asm.h"



char arrayGrades[] =  {20,10,10,10,10,10};
char *ptrgrades = arrayGrades;

char arrayFreq[21];
int num = 6;
char *ptrfreq = arrayFreq;

int main(void){
	
	frequencies();
	for(int i=0;i<21;i++){
		printf("[%d]-> %d\n",i,*(ptrfreq));
		ptrfreq ++;		
	}
}
