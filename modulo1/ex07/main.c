#include <stdio.h>
#include "array_sort1.h"
int main(){
	int vec[] = {1,4,7,3,1};
	int n=5;
	
	array_sort1(vec,n);
	for(int i=0;i<n;i++){
		printf("%d ",vec[i]);		
	}	
}
