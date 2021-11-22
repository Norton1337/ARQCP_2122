#include <stdio.h>
#include "calcula_resto.h"
#include "noves_fora.h"

int main(){
	unsigned int numeros [10] = {0x0B0F0000, 0x0C0A0000, 0x0B080000, 0x07100000, 0x0F120000,
	0xF0E10000, 0x0B0F0000, 0x0A0B0000, 0x0F100000, 0x090F0000};
	noves_fora(numeros, 10);
	
	int i = 0;
	
	unsigned short *number = (unsigned short*) numeros;
	unsigned char *rest = (unsigned char*) (numeros);
	
	number++;
	while(i < 10){
		
		printf("Numero a dividir: %hd\n", *(number));
		printf("O seu resto: %hhd\n\n", *rest);
		number += 2;
		rest += 4;
		i++;
	}
	
	return 0;
}
