#include <stdio.h>
int activate_bits(int a, int left, int right){
	
	
	int beforeLeft=a;
	a=a>>31;
	int i=0;
	for(;i+left<31;i++){
		a=(a<<1)|1;
	}
	
	a=a<<(left+1);
	a=beforeLeft|a;
	int beforeRight=a;
	a=a>>right;
	
	for(int i = 0; i<right; i++){
		a=(a<<1)|1;
	}
	a=a|beforeRight;
	return a;

}
