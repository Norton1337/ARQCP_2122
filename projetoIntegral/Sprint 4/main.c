#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#include "freeMemory.h"
#include "getSize.h"
#include "printArray.h"
#include "importContainers.h"
#include "printContainerInfo.h"
#include "checkRefrigerated.h"
#include "calculateEnergy.h"
int main(){
	
	int size = getSize();

	Containers *array = (Containers*) calloc(size, sizeof(Containers));
	
	if(importContainers(array) == 0){
		fprintf(stderr, "Out of memory");
        exit(0);
	}

	printf("\n --- <US409> I wish to fill a dynamically reserved matrix in memory. ---\n\n");

	
	printf("Size of struct Containers: %d\n\n",sizeof(Containers));

	printArray(array,size);
    printContainerInfo(array,size,0,0,2);
    
    printf("\n\n --- <US410> Amount of needed energy to keep the container at its required temperature. ---\n\n");
    
    double energyRequired = calculateEnergy(array,size,4,4,4,1.0);
    if(energyRequired==-2)
		printf("Container doesn't exist\n");
    else if(energyRequired!=-1)
		printf("Energy Required for this container: %EJ\n",energyRequired);
	else
		printf("Container doesn't need refrigeration\n");
		
		
	printf("\n\n --- <US411>  Receive an alert when provided energy is not enough. ---\n\n");
	
	double providedEnergy;
	printf("Insert total generated energy: \n");
	scanf("%lf", &providedEnergy);

	int bool = enoughEnergy(array,size,providedEnergy);
	if(bool==-1)
		printf("Error has occured\n");
	else if(bool==0)
		printf(" !! Warning! Not enough power! !! --\n\n");
	else
		printf("All generators are being powered\n\n");
	
	
    freeMemory(array,size);
	
	
	return 0;
}
