#include <stdio.h>
#include "find_all_words.h"
int main(){

	char sentence[]="rrxXXXX";
	char word[] = "X";
	
	char* initial_addr = sentence;
	char *addrs[sizeof(sentence)];

	find_all_words(initial_addr, word, addrs);

	
	
	return 0;
}
