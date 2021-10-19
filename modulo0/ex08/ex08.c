#include <stdio.h>
#include <stdbool.h>


int integer_part(char *x){
	
	int pos=0;
	int converted=0;
	char number = x[pos];
	while(number!='.' && number!='\0'){
		converted= converted *10 + number - '0';
		pos++;
		number=x[pos];
	};
	
	return converted;
}


int fractional_part(char *x){
	
	
	int pos=0;
	while(x[pos]!='.' && x[pos]!='\0'){
		pos++;
	}
	int converted=0;
	
	if(x[pos]!='\0'){
		pos++;
		
		char number = x[pos];
		printf("%d",pos);
		
		while(number!='\0'){
			converted= converted *10 + number - '0';
			pos++;
			number=x[pos];
		};
	}
	
	
	return converted;

}

int main(){
	char x[10];
	printf("Write a number with a fractional part: ");
	scanf("%s",x);
	int x_int = integer_part(x);
	int x_frac = fractional_part(x);
	printf("The integer part is: %d, and the fractional part is: %d",
			x_int,x_frac);
	return 0;
}
