#include <stdlib.h>
#include "info.h"

int freeMemory(Containers*** matrix){

	for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            free(matrix[i][j]);
        }
        free(matrix[i]);
    }
    free(matrix);

	return 1;
}
