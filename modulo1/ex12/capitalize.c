void capitalize (char *str){
	
	if(*str>='a'&&*str<='z')
		*str-=32;
	str++;
	
	while(*str!='\0'){
		if(*str>='a'&&*str<='z'&&*(str-1)==' ')
			*str-=32;
		str++;
	}
}
