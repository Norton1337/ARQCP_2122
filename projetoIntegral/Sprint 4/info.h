#ifndef INFO_H
#define INFO_H


typedef struct {
	int x,y,z;
	int container_number;
	int check_digit;
	float container_payload;
	float container_tare;
	float container_gross;
	float container_volume;
	char[4] iso_code;
	char *certificates;
	char *repairInfo;
	char *type;
	char *load;
	int test;
} Containers;

#endif
