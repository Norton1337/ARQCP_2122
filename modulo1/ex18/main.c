#include <stdio.h>
#include "compress_shorts.h"

int main(){
	
	short shorts[]={12,22,33,44};
	int size=4;
	int ints[size/2];
	compress_shorts(shorts,size,ints);
	
	for(int i=0;i<size/2;i++){
		printf("%d ",ints[i]);
	}
	return 0;
}
