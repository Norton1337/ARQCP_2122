#include <stdio.h>
#include <stdbool.h>
#include "sum.c"


int main() {
	bool isUnderTen = false;
	int a;
	int b;
	int c;
	while(!isUnderTen){
		printf("Insert the first int: ");
		scanf("%d", &a);
		printf("Insert the second int: ");
		scanf("%d", &b);
		c = sum(a,b);
		if(c<10){
			isUnderTen = true;
		}
		printf("%d\n",c);

	}
	
	return 0;
	
}


