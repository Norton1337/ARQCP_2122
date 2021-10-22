#include <stdio.h>
#include <stdbool.h>

int main() {

	char number [10];
	printf("Write a number in binary, octal, decimal or hexadecimal: ");
	scanf("%s",number);
	
	int pos=0;
	bool isBinary = true;
	bool isOctal = true;
	bool isDecimal = true;
	bool isHexadecimal = true;
	
	if(number[0] == '0' && number[1] == 'x') {
		isBinary = false;
		isOctal = false;
		isDecimal = false;

	}else{
	
		while(number[pos]!='\0'){
		
			if(number[pos] > '7' ){
				isOctal = false;
			}
			
			if(number[pos] > '1' ){
				isBinary = false;
			}
			if(number[pos]=='A'||number[pos]=='B'||number[pos]=='C'||number[pos]=='D'||number[pos]=='E'||number[pos]=='F'){
				isDecimal = false;
			}
			if(number[pos]=='a'||number[pos]=='b'||number[pos]=='c'||number[pos]=='d'||number[pos]=='e'||number[pos]=='f'){
				isDecimal = false;
			}
			
			
		
			pos++;		
		}
		
	}
		
	if(isBinary)
		printf("\nThe number can be Binary");
	if(isOctal)
		printf("\nThe number can be Octal");
	if(isDecimal)
		printf("\nThe number can be Decimal");
	if(isHexadecimal)
		printf("\nThe number can be Hexadecimal\n");
		
	


	return 0;
}
