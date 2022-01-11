#include <stdio.h>
#include <stdlib.h>
#include "info.h"

void printMatrix(Containers*** matrix){
	
	for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++) {
                printf("%d ", matrix[i][j][k].id);
            }
            printf("\n");
        }
        printf("\n");
    }
}
