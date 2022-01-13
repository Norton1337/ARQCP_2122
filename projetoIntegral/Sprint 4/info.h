#ifndef INFO_H
#define INFO_H


typedef struct {
	int container_number;
	int check_digit;
	int container_payload;
	int container_tare;
	int container_gross;
	int container_volume;
	char iso_code[5];
	char certificates[20];
	char repairInfo[20];
	char type[20];
	char load[20];
} Containers;

#endif
