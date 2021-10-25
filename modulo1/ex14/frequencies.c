void frequencies(float *grades, int n, int *freq){
	for(int i=0;i<n;i++)
		*(freq + (int)*(grades+i))+=1;
}
