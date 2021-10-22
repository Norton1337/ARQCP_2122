#include <stdio.h>

void upper1(char *str){
	
	int i=0;
	
	while(str[i]!='\0'){
		
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		}

		i++;
		
	};
	printf("string to upper: %s",str);
}
