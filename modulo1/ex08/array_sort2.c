void array_sort2(int *vec, int n){
	
	int number;	
	for(int k=0;k<n;k++){
		for(int i=k;i<n;i++){
			
			if(*(vec+i)<*(vec+k)){
				number=*(vec+i);
				*(vec+i)=*(vec+k);
				*(vec+k)=number;
			}	
		}	
	}	
}
