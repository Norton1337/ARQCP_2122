#include <stdio.h>
#include "info.h"
	typedef struct {
	char materialType[20];
	float espessura;
	
} Materials;

typedef struct {
	int containerNumber;
	float temperaturaInterior;
	float containerVolume;
	char type[20];
	char load[20];
	Materials materials[10];
} Containers;

int importContainers(Containers*** matrix){
	int x=0;
	int y=0;
	int z=0;
	
	Containers temp;

	FILE* filePointer;
	filePointer = fopen("containers.txt", "r");
	
	if(filePointer == NULL) {
		return 0;
	}
	char materials[100];
	
	while(fscanf(filePointer,"%d,%d,%d,%d,%f,%f,%[^,],%[^,],{%[^}]}",
				&x,
				&y,
				&z,
				&temp.containerNumber,
				&temp.temperaturaInterior,
				&temp.containerVolume,
				temp.type,
				temp.load,
				materials) != EOF)
	{
		
		matrix[x][y][z]=temp;
	}
				
	fclose(filePointer);		
						
	
	
	return 1;
}
