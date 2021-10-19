#include <stdio.h>
#include <stdbool.h>

int count_words(char *str){

	int amount=0;
	int pos=0;
	bool isPhraseEnded = false;
	
	while(!isPhraseEnded){
		
		if(str[pos]==' ' && str[pos+1]!='\0' && str[pos+1]!=' '){
			amount++;
			
		}

		
		pos++;
		if(str[pos]=='\0'){
			amount++;
			isPhraseEnded = true;
		}
	};
	
	return amount;
}

int main(){
	
	char string1[50];
	int amountOfWords;
	
	printf("Insert the first string: ");
	scanf("%[^\n]s",string1);
	amountOfWords = count_words(string1);
	printf("There are %d words in that phrase",amountOfWords);
	return 0;
}
