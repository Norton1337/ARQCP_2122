#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "US301.h"
#include "divideByComma.h"
#include "printArray.h"
#include "printMatrix.h"
#include "putRestWithZero.h"
#define N_ELEM 4
#define N_MAX 5

int num=N_MAX;
int elemSize=N_ELEM;
int matrix[N_MAX][N_MAX][N_MAX];
int main()
{
    
    putRestWithZero(matrix);


    FILE* filePointer;
    int bufferLength = 255;
    char buffer[bufferLength];

    filePointer = fopen("cargo.txt", "r");
	
    while(fgets(buffer, bufferLength, filePointer)) {
        char *s = buffer;
        char *pt;
        pt = strtok (s,",");

        int *arrayOfInt = divideByComma(pt);

        int elem = arrayOfInt[0];
        int x = arrayOfInt[1];
        int y = arrayOfInt[2];
        int z = arrayOfInt[3];

        matrix[x][y][z] = elem;

        //printMatrix(matrix);
        //printArray(arrayOfInt);
    }
    printMatrix(matrix);
    
    long amountOfContainers = countContainers();
    int *amount = (int*) &amountOfContainers;
    
	printf("There are %d containers\n",*amount);
	printf("There are %d free slots\n",*(amount+1));
	
    //Close file descriptor
    fclose(filePointer);
}


