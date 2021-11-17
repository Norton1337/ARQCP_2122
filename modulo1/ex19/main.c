#include <stdio.h>
#include "find_word.h"

int main(){

	char sentence[]="rrxXXXX";
	char word[] = "x";
	
	char* initial_addr = sentence;
	
	char* ptr = find_word(initial_addr,word);
	
	printf("%s",ptr);
	printf("\n%p",ptr);
	
	
	return 0;
}
