#include <stdlib.h>
#include "info.h"

int allocateMemory(Containers*** matrix){
	
	if (matrix == NULL)
    {
        return 0;
    }
    
    for(int i=0; i<10; i++){
		
		matrix[i] = (Containers**) calloc(10, sizeof(Containers*));
		if (matrix[i] == NULL)
		{
			return 0;
		}
		
		for(int k=0; k<10;k++){
		
			matrix[i][k] = (Containers*) calloc(10, sizeof(Containers));
			if (matrix[i][k] == NULL)
			{
				return 0;
			}	
			
		}
		
	}
	
	return 1;
	
}
