#include <stdio.h>
#include "calcula_resto.h"
void noves_fora(unsigned int *numeros, int n){
	
	unsigned short *shorts = (unsigned short*)numeros;
	unsigned char *chars = (unsigned char*)numeros;
	
	shorts++;
	int i=0;
	while(i<n){
		numero_atual = *shorts;
		*chars = calcula_resto();
		shorts +=2;
		i++;
		chars+=4;
	}

	

}
