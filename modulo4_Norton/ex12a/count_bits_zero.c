#include <stdio.h>
int count_bits_zero(int x){

	int count = 0;
	for(int i=0;i<32;i++){
		if((x & 1) == 0)
			count++;
		x = x>>1;
	}
	return count;
}
