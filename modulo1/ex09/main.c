#include <stdio.h>
#include "sort_without_reps.h"

int main(){

	int src[] = {2,0,1};
	int n = 3;
	int dest[n];
	
	
	printf("Src:  ");
	for(int k=0;k<n;k++){
		printf("%d",*(src+k));
					
	};
	printf("\n");
	int sorted = sort_without_reps(src,n,dest);

	printf("\nDest: ");
	for(int k=0;k<sorted;k++){
		printf("%d",*(dest+k));
					
	}
	printf("\n");
}
 
