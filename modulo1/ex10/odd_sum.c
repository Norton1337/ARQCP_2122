#include <stdio.h>
int odd_sum(int *p){
	int sum=0;
	for(int i=1;i<*p+1;i++){
		if(p[i]%2!=0)
			sum+=p[i];		
	}

	return sum;
}
