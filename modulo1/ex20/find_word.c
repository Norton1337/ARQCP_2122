#include <stddef.h>

char* find_word(char* word, char* initial_addr){
 
	int pos=0;

	while(*initial_addr!='\0'){

		if(*initial_addr==*word){
			while(*(initial_addr+pos)==*(word+pos)){
				pos++;
				if(*(word+pos)=='\0'){
					return initial_addr;
				}
			}
			pos=0;
		}

		initial_addr++;
	}
	
	return NULL;
}
