#include <stdio.h>
int activate_bit(int *ptr, int pos){
	int before=*ptr;
	*ptr=(*ptr>>pos)|1;
	*ptr=*ptr<<pos;
	*ptr=before|*ptr;
	
	if(before==*ptr)
		return 0;
	return 1;
}
