#include <stdio.h>
#include "power_ref.h"

int main(){

	int x;
	int *ptr;
	ptr=&x;
	*ptr=3;
	int y=-1;

	printf("%d ^ %d = ",x,y);
	power_ref(ptr,y);
	printf("%d",x);
}
