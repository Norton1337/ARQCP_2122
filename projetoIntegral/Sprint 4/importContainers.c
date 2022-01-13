#include <stdio.h>
#include "info.h"

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
	while(
		fscanf(filePointer,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%[^,],%[^,],%[^,],%[^,],%[^\n]",
				&x,
				&y,
				&z,
				&temp.container_number,
				&temp.check_digit,
				&temp.container_payload,
				&temp.container_tare,
				&temp.container_gross,
				&temp.container_volume,
				temp.iso_code,
				temp.certificates,
				temp.repairInfo,
				temp.type,
				temp.load) != EOF
			)
	{
							
		matrix[x][y][z]=temp;
	}
				
	fclose(filePointer);		
						
	
	
	return 1;
}
