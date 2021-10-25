#include <stdio.h>

void upper2(char *str){
	
	char *ptr = NULL;
	ptr=str;
	printf("Before: %s\n",ptr);
	while(*ptr!='\0'){
		
		if( *ptr>='a' &&  *ptr<='z'){
			 *ptr= *ptr-32;
		}
		ptr++;
	}
	ptr=str;
	printf("After: %s\n",ptr);
}
