#include <stdio.h>
#include <stdlib.h>
#include "printContainerInfo.h"
#include "info.h"

void printContainerInfo(Containers*** matrix, int x, int y, int z){
	/*if(matrix[x][y][z].container_number != 0){
		exit(0);
	}*/
	
	
	printf("Container Number: %d\n", matrix[x][y][z].containerNumber);
	printf("Container Temperature: %f\n", matrix[x][y][z].temperaturaInterior);
	printf("Container Volume: %f\n", matrix[x][y][z].containerVolume);
	printf("Type: %s\n", matrix[x][y][z].type);
	printf("Load: %s\n", matrix[x][y][z].load);
	for(int i=0;i<10;i++){
		printf("Material: %s", matrix[x][y][z].materials[i].materialType);
		printf("Material: %f", matrix[x][y][z].materials[i].espessura);
	}
	
}
