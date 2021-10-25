void swap(int* vec1, int*vec2, int size){
	
	int swapping;
	for(int i=0;i<size;i++){
		swapping=*(vec1+i);
		*(vec1+i)=*(vec2+i);
		*(vec2+i)=swapping;
	}

}
