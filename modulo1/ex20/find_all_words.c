#include "find_word.h"
#include <stdio.h>

void find_all_words(char* str, char* word, char** addrs){
	while(*str!='\0'){
		printf("%c",*str);
		*addrs = find_word(word,str);
		addrs++;
		
	}
	printf("%d",**addrs);
	for(int i=0;i<sizeof(**addrs);i++){
		
		printf("%s",*addrs);
		
	}


}
