#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "info.h"
#include "calculateEnergy.h"

int enoughEnergy(Containers * containerArray, int size, double providedEnergy){

	double requiredEnergy=0;
	double thisEnergy=0;
	for(int i=0;i<size;i++){ //add energy required of each refrigerated container to "requiredEnergy"
		
		if(checkRefrigerated(containerArray,size ,containerArray[i].x,containerArray[i].y,containerArray[i].z)==1){
			thisEnergy=calculateEnergy(containerArray,size,containerArray[i].x,containerArray[i].y,containerArray[i].z,1.0);
			if(thisEnergy<0)
				return -1;
			requiredEnergy+=thisEnergy;
		}
	}

	if(requiredEnergy>providedEnergy){ //if not enough energy is supplied, return 0, 1 otherwise
		return 0;
	}else{
		return 1;
		
	}
}
