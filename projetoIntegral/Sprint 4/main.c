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
	
	int x=0;
	int y=0;
	int z=0;
	
	getMax(&x,&y,&z);
	
	//printf("max X: %d\n",x);
    //printf("max Y: %d\n",y);
    //printf("max Z: %d\n",z);
    
    
	Containers *** matrix = (Containers***) calloc(x, sizeof(Containers**));
	
	//Allocate Memory
	if (allocateMemory(matrix,x,y,z) == 0){
		fprintf(stderr, "Out of memory");
        exit(0);
	}
	
	if(importContainers(matrix,x,y,z) == 0){
		fprintf(stderr, "Out of memory");
        exit(0);
	}
	
	
	//Print containers id
	printMatrix(matrix,x,y,z);
    //printContainerInfo(matrix,0,0,2);
    
    
    //int test = checkRefrigerated(matrix, 1,1,1);
 
	printf("size: %ld\n",sizeof(matrix));
        
    float energyRequired = calculateEnergy(matrix,0,0,2,1.0);
    if(energyRequired!=-1)
		printf("Energy Required: %dJ\n",energyRequired);
	else
		printf("Container doesn't need refrigeration\n");
    //Free memory
    freeMemory(matrix,x,y,z);
	
	
	return 0;
}
