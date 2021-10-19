#include <stdio.h>



int count(int *vec, int n, int value){
	int amount=0;
	for(int i=0;i<n;i++){
		if(vec[i]==value){
			amount++;
		}
	}

	return amount;
}

int main() {
	int length;
	printf("How long will the array be :");
	scanf("%d",&length);
	printf("Insert %d numbers:\n", length);
	int array [length];
	int newInt;
	for(int i=0;i<length;i++){
		scanf("%d",&newInt);
		array[i]=newInt;
	}
	int value;
	printf("Insert number to test: ");
	scanf("%d",&value);
	printf("'%d' exists %d times in the array",value,count(array,length,value));

}
