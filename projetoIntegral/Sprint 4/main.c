#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#include "freeMemory.h"
#include "allocateMemory.h"
int main(){
	
	
	Containers *** matrix = (Containers***) calloc(10, sizeof(Containers**));
	//Allocate Memory
	if (allocateMemory(matrix) == 0){
		fprintf(stderr, "Out of memory");
        exit(0);
	}
	

	//Print containers id
	printMatrix(matrix);
    
    
    
    //Free memory
    freeMemory(matrix);
	
	
	return 0;
}
