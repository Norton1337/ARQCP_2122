#include <stddef.h>
char* where_exists(char* str1, char* str2){

	int pos=0;

	while(*str2!='\0'){

		if(*str2==*str1){
			while(*(str2+pos)==*(str1+pos)){
				pos++;
				if(*(str1+pos)=='\0'){
					return *str2;
				}
			}
			pos=0;
		}

		str2++;
	}
	
	return NULL; 
}
