#include <stdio.h>
#include "find_word.h"

int main(){

	char sentence[]="rrxXXXX";
	char word[] = "x";
	
	char* initial_addr = sentence;
	
	char* ptr = find_word(word,initial_addr);
	printf("%s",ptr);
	printf("\n%p",ptr);
	
	
	return 0;
}
