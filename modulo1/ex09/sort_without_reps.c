#include <stdio.h>
#include <stdbool.h>
int sort_without_reps(int *src, int n, int *dest){
	int sorted=0;
	int number=*src;	
	bool anotherLow=false;
	for(int k=0;k<n;k++){
		anotherLow=false;
		for(int i=k;i<n;i++){
			
			if(*(src+i)<*(src+k)){
				number=*(src+i);
				*(src+i)=*(src+k);
				*(src+k)=number;
				anotherLow=true;
			}	
		}	

		if(sorted==0){
			*dest=number;
			sorted++;
		}
		else if((anotherLow || k==n-1) && *(dest+sorted-1)!=*(src+k)){
			*(dest+sorted)=*(src+k);
			sorted++;
		}
			
	}
	for(int k=0;k<sorted;k++){
		printf("Element[%d] = %d\n",k,*(dest+k));
					
	}
	return sorted;
}
