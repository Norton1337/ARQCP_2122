#include <stdio.h>

int array [30];
int arrayPos = 0;

void fill_array(int *vec) {
	int newInt;
	while(arrayPos<30){
		scanf("%d",&newInt);
		array[arrayPos]=newInt;
		arrayPos++;
	}

}


int main() {
	fill_array(array);
	int sum=0;
	for(int i=0;i<30;i++){
		sum += array[i];
	};
	printf("The average of all number inside the array is: %d",sum/30);
	
}
