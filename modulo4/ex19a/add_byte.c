void add_byte(char x, int *vec1, int *vec2){

	int size = *vec1;
	vec1++;
	*vec2 = size;
	vec2++;
	for(int i=0;i<size;i++){
		char * test = (char*) vec1;
		*test=((*test)+x);
		*vec2=*vec1;
		vec2++;
		vec1++;
	}

}
