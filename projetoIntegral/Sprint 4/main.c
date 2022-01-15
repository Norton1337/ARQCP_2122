#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#include "freeMemory.h"
#include "allocateMemory.h"
#include "getMax.h"
#include "printMatrix.h"
#include "importContainers.h"
#include "printContainerInfo.h"
#include "checkRefrigerated.h"
#include "calculateEnergy.h"
int main(){
	
	int size = getSize();

	Containers *array = (Containers*) calloc(size, sizeof(Containers));

	//Allocate Memory
	/*if (allocateMemory(matrix,x,y,z) == 0){
		fprintf(stderr, "Out of memory");
        exit(0);
	}*/
	
	if(importContainers(array) == 0){
		fprintf(stderr, "Out of memory");
        exit(0);
	}
	
	
	//Print containers id
	//printArray(array,size);
    printContainerInfo(array,size,0,0,2);
    
    
    //int test = checkRefrigerated(matrix, 1,1,1);
 
	//printf("size: %ld\n",sizeof(matrix[1][0][0].materials));
        
    /*float energyRequired = calculateEnergy(array,0,0,2,1.0);
    if(energyRequired!=-1)
		printf("Energy Required: %dJ\n",energyRequired);
	else
		printf("Container doesn't need refrigeration\n");
		*/
    //Free memory
    freeMemory(array,size);
	
	
	return 0;
}
