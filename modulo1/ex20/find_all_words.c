#include <stdio.h>

void find_all_words(char* str, char* word, char** addrs){
	int pos=0;
	
	
	while(*str!='\0'){
		if(*str==*word){
			while(*(str+pos)==*(word+pos)){
				pos++;
				if(*(word+pos)=='\0'){
					*addrs = str;
					addrs++;
				}
			}
			pos=0;
		}
		str++;	
	}


}
