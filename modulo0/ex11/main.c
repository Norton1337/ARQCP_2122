#include <stdio.h>
#include "average.h"

int g_n;
int g_v[100];
int main() {
	int v[] = {1,2,10};
	int r = 0;
	int t = 0;
	int y = 0;
	r = average(v[0], v[1]);
	printf("average = %d\n",r);
	t = average_array(v,3);
	printf("average of array = %d\n",t);
	y = average_global_array();
	printf("average of global array = %d\n",y);
	return 0;
}
