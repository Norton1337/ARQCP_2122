void changes(int *ptr){

	
	int r = 0;
	r = ((1 << 4) - 1) << 20;

	int test = (r&*ptr)>>20;
	if(test>7){
		for(int i=0;i<4;i++)
			*ptr = *ptr ^ (1 << (20+i));
	}
	

}
