void power_ref(int *x, int y){
	int numb = *x;
	int result=1;
	int exp;
	if(y<0)
		exp = -y;
	else
		exp = y;
	for(int i=0;i<exp;i++){
		if(y<0){
			result*= (1/numb);
		}
		result *= numb;
		
	}
	
	*x=result;
}
