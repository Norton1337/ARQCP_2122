#include <stdio.h>
#include "greater_date.h"



int main(void){
	int date1=(2017 << 8)  | (11 <<24 ) |  10;
	int date2=(2017 << 8)  | (11 <<24 ) |  12;
	
	unsigned int res = greater_date(date1,date2);

	printf("%d\n",res);
}
