#include <stdio.h>
#include "palindrome.h"

int main(){

	char string[] = "aaabab";

	int bool = palindrome(string);
	printf("isPalindorme: %d\n",bool);
}
