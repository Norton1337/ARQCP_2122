#include <stdio.h>
#include "average.h"

int main() {
	int v[] = {1,2,10};
	int r = 0;
	int t = 0;
	r = average(v[0], v[1]);
	printf("average = %d\n",r);
	t = average_array(v,3);
	printf("average of array = %d\n",t);
	
	return 0;
}
