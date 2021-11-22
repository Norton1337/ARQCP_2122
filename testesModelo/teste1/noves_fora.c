#include <stdio.h>
#include "calcula_resto.h"

void noves_fora(unsigned int *numeros, int n){
	int i = 0;
	unsigned short *number = (unsigned short*) numeros;
	unsigned char *rest = (unsigned char*) (numeros);
	
	number++;
	while(i < n){
		numero_atual = *number;
		*rest = calcula_resto();
		number += 2;
		rest += 4;
		i++;
	}
}
