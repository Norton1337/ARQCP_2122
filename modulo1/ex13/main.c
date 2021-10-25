#include <stdio.h>
#include <string.h>
#include "where_is.h"

int main() {

	char str[]= "The quick brown fox jumped over the lazy dog";
	char c = 'x';
	int vec[strlen(str)];
	int amount=where_is(str,c,vec);
	printf("amount = %d\n",amount);
	for(int i=0;i<amount;i++){
		printf("%d\n",vec[i]);
		
	}
	
}
