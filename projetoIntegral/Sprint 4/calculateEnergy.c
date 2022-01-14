#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "info.h"


int calculateEnergy(Containers*** matrix, int x, int y, int z, float hours){

	int listSize = 14;
	
	char *materialList[14]= {"Air","Pine","Oak","Ice","Water","Glass",
							 "Concrete","Lead","Steel","Iron","Aluminum",
							 "Gold","Copper","Silver"};
	float conductivityList[14] = {0.026,0.11,0.15,0.592,0.609,0.8,0.55,35.3,
								  46,80.4,237,318,401,429};
								  
	Containers thisContainer = matrix[x][y][z];

	if(thisContainer.containerNumber==0)
		return 0;
		
	//check if it needs refrigeration
	
	
	float resistencia=0;
	float area= (thisContainer.width*thisContainer.length)*2 + 
				(thisContainer.width*thisContainer.height)*2 +
				(thisContainer.height*thisContainer.length)*2;
	
	for(int i=0;i<thisContainer.materialAmount;i++){
		
		float conductivity=0;
		
		for(int k=0;k<listSize;k++){
			if(strcmp(thisContainer.materials[i].materialType,materialList[k])==0){
				conductivity = conductivityList[k];				
				resistencia+=thisContainer.materials[i].espessura/(conductivity*area);
				break;
			}
		}
	}
	
	float temperaturaExterior = 20.0;
	
	float fluxoCalor = (temperaturaExterior - thisContainer.temperaturaInterior) /
						resistencia;
	
	
	float energyRequired = (hours*3600) * fluxoCalor;
	
	
	return energyRequired;
}
