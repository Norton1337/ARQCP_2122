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
	printf("Container Length: %f\n", matrix[x][y][z].length);
	printf("Container Width: %f\n", matrix[x][y][z].width);
	printf("Container Height: %f\n", matrix[x][y][z].height);
	printf("Type: %s\n", matrix[x][y][z].type);
	printf("Load: %s\n", matrix[x][y][z].load);
	printf("Materials [ %d ]: \n",matrix[x][y][z].materialAmount);
	for(int i=0;i<matrix[x][y][z].materialAmount;i++){
		printf("	Material: %s\n", matrix[x][y][z].materials[i].materialType);
		printf("	Espessura: %f\n", matrix[x][y][z].materials[i].espessura);
	}
	
}
