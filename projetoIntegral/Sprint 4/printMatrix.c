#include <stdio.h>
#include <stdlib.h>
#include "info.h"

void printMatrix(Containers*** matrix, int x, int y, int z){
	
	for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {

            for (int k = 0; k < z; k++) {
                printf("%s ", matrix[i][j][k].iso_code);
            }
            printf("\n");
        }
        printf("\n");
    }
}
