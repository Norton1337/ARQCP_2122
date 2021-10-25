#include <stdio.h>
#include "populate.h"
#include "check.h"
#include "inc_nsets.h"
extern int nSets;
int main(){

	int num=100;
	int vec[num];
	int limit=20;
	
	populate(vec,num,limit);
	for(int i=0;i<num;i++){
		
		printf("%d\n",vec[i]);
		
	}
	for(int i=0;i+2<num;i++){
		if(check(vec[i],vec[i+1],vec[i+2])==1){
			inc_nsets();
		}
		
	}
	printf("%d",nSets);
	
	


}
