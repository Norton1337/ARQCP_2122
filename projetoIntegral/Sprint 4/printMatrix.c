#include <stdio.h>
#include <stdlib.h>
#include "info.h"

void printMatrix(Containers*** matrix, int x, int y, int z){
	
	for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {

            for (int k = 0; k < z; k++) {
                printf("%d ", matrix[i][j][k].containerNumber);
            }
            printf("\n");
        }
        printf("\n");
    }
}
