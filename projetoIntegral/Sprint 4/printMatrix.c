#include <stdio.h>
#include <stdlib.h>
#include "info.h"

void printArray(Containers* arrayContainers, int size){
	
	for (int i = 0; i < size; i++){
      printf("%d\n", arrayContainers[i].containerNumber);
    }
}
