#include <stdio.h>

int string_to_int(char *str) {
	
	int pos=0;
	char number = str[pos];
	int converted=0;
	while(number!='\0'){
		converted= converted *10 + number - '0';
		pos++;
		number=str[pos];
	};
	return converted;
}

int main() {

	int number = string_to_int("12345");
	printf("%d", number);
	
}
