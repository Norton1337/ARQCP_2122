void compress_shorts(short* shorts, int n_shorts, int* integers){

	int mult;
    for(int i=0;i+1<n_shorts;i++){
		mult=10;
		while(shorts[i+1] >= mult)
			mult *= 10;
		*integers = shorts[i] * mult + shorts[i+1];
		integers++;
	}

    

}
