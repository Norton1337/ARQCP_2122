#include <stdio.h>
#include "asm.h"
int g=0;
int h=0;
int i=1;
int j=7;

int r=0;

int f(){
	if(i==j)
		h=i-j+1;
	else
		h=i+j-1;
	return h;
}

int f2(){
	if(i>j)
		i=i-1;
	else
		j=j+1;
	h=j*i;
	return h;
}

int f3(){
	if(i>=j){
		h=i*j;
		g=i+1;
	}
	else{
		h=i+j;
		g=i+j+2;
	}
	r=g/h;
	return r;
}

int f4(){
	if(i+j<10)
		h=4*i*i;
	else{
		h=j*j/3;
	}
	return h;
}

int main(void){
	int theI=i;
	int theJ=j;
	
	int testFs = fs();
	i=theI;
	j=theJ;
	int testF2s = fs2();
	i=theI;
	j=theJ;
	int testF3s = fs3();
	i=theI;
	j=theJ;
	int testF4s = fs4();
	i=theI;
	j=theJ;
	
	int testF = f();
	i=theI;
	j=theJ;
	int testF2 = f2();
	i=theI;
	j=theJ;
	int testF3 = f3();
	i=theI;
	j=theJ;
	int testF4 = f4();
	
	printf("fs = %d --- f = %d\n", testFs, testF);
	printf("fs2 = %d --- f2 = %d\n", testF2s,testF2);
	printf("fs3 = %d --- f3 = %d\n", testF3s, testF3);
	printf("fs4 = %d --- f4 = %d\n", testF4s, testF4);
}


