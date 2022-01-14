#ifndef INFO_H
#define INFO_H

typedef struct {
	char materialType[20];
	float espessura;
	
} Materials;

typedef struct {
	int containerNumber;
	float temperaturaInterior;
	float length;
	float width;
	float height;
	char type[20];
	char load[20];
	Materials materials[10];
	int materialAmount;
} Containers;

#endif
