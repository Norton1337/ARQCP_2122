#ifndef INFO_H
#define INFO_H

typedef struct {
	char *materialType;
	float espessura;
	
} Materials;

typedef struct {
	int x,y,z; //12bytes
	int containerNumber;//4bytes
	float temperaturaInterior;//4bytes
	float length;//4bytes
	float width;//4bytes
	float height;//4bytes
	char *type;//8bytes
	char *load;//8bytes
	Materials *materials;//8bytes
	int materialAmount;//4bytes
} Containers;

#endif
