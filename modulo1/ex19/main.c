#include <stdio.h>
#include "find_word.h"

int main(){

	char sentence[]="the quick brown fox jumped over the lazy dog";
	char word[] = "jumped";
	
	char* initial_addr = sentence+5;
	
	char* ptr = find_word(word,initial_addr);
	printf("%s",ptr);
	


	
	return 0;
}
