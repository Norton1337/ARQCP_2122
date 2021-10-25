#include <stdio.h>
#include "where_exists.h"

int main(){
	char str1[]="x";
	char str2[]="rrxXXXX";
	
	
	
	char* test = where_exists(str1,str2);
	printf("\n%p",*(str2+2));
	printf("\n%p",test);

}
