#include <string.h>

int palindrome(char *str){
	
	int isPalindrome=1;
	if(strlen(str)==0)
		isPalindrome=0;
	int k=strlen(str)-1;
	
	for(int i=0;i<strlen(str);i++){
		if(i>=k)
			break;
		while(str[i]==' '||str[i]==','||str[i]=='.'||str[k]==' '||str[k]==','||str[k]=='.'){
			if(str[i]==' '||str[i]==','||str[i]=='.')
				i++;
			if(str[k]==' '||str[k]==','||str[k]=='.')
				k--;
		}

		if(str[i]!=str[k]){
			
			if((str[i]>='A' &&  str[i]<='Z')||(str[i]>='a' &&  str[i]<='z')){
				if(str[i]+32 == str[k]){}
				else if(str[i]-32 == str[k]){}
				else{
					
					isPalindrome=0;
					break;
					
				}
			}
			else{
				isPalindrome=0;
				break;
			}
			
		}
			
		
		k--;
		
			
	}

	return isPalindrome;

}
