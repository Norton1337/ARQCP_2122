#include <stdio.h>
#include <stdlib.h>
#include "printContainerInfo.h"
#include "info.h"

void printContainerInfo(Containers*** matrix, int x, int y, int z){
	/*if(matrix[x][y][z].container_number != 0){
		exit(0);
	}*/
	printf("Container number: %d\n", matrix[x][y][z].container_number);
	printf("Container number: %d\n", matrix[x][y][z].check_digit);
	printf("Container number: %d\n", matrix[x][y][z].container_payload);
	printf("Container number: %d\n", matrix[x][y][z].container_tare);
	printf("Container number: %d\n", matrix[x][y][z].container_gross);
	printf("Container number: %d\n", matrix[x][y][z].container_volume);
	printf("Container number: %s\n", matrix[x][y][z].iso_code);
	printf("Container number: %s\n", matrix[x][y][z].certificates);
	printf("Container number: %s\n", matrix[x][y][z].repairInfo);
	printf("Container number: %s\n", matrix[x][y][z].type);
	printf("Container number: %s\n", matrix[x][y][z].load);
	
}
