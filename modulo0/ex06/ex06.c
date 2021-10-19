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

	char string1[6];
	char string2[6];
	
	printf("Insert the first string: ");
	scanf("%s",string1);
	printf("Insert the second string: ");
	scanf("%s",string2);
	
	int number1 = string_to_int(string1);
	int number2 = string_to_int(string2);
	

	printf("The average of both numbers is: %d", (number1+number2)/2);
	return 0;
}
