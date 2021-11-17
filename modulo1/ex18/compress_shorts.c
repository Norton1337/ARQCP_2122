#include <stdio.h>
void compress_shorts(short* shorts, int n_shorts, int* integers){

	short *ptr2 =(short*)integers;

	for(int i=0;i+1<n_shorts;i++){
		
		*ptr2=shorts[i];
		ptr2++;
		*ptr2=shorts[i+1];
	}
	
}
