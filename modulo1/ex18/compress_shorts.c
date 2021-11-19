#include <stdio.h>
void compress_shorts(short* shorts, int n_shorts, int* integers){

	unsigned short *ptr2 =(unsigned short*)integers;
	
	int i=0;
	while(i<n_shorts){
		*ptr2=*shorts;
		ptr2++;
		shorts++;
		i++;
	}
	
}
