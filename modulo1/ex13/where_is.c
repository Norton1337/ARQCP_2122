int where_is (char *str, char c, int *p){
	int amount=0;
	int index=0;
	while(*str!='\0'){
		if(*str==c){
			amount++;
			*p=index;
			p++;
		}
		
		str++;
		index++;
	}
	
	return amount;
}
