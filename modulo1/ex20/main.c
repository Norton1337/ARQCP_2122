#include <stdio.h>
#include "find_all_words.h"
int main(){

	char sentence[]="rrxXX-XX";
	char word[] = "X";
	
	char *addrs[sizeof(sentence)];

	find_all_words(sentence, word, addrs);
	
	
	printf("%s\n",addrs[0]);
	printf("%s\n",addrs[1]);
	printf("%s\n",addrs[2]);
	printf("%s\n",addrs[3]);
	
	return 0;
}
