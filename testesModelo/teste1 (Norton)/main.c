#include <stdio.h>
#include "noves_fora.h"
int main(){

	unsigned int numeros [10] = {0x0B0F0000, 0x0C0A0000, 0x0B080000, 0x07100000, 0x0F120000,
	0xF0E10000, 0x0B0F0000, 0x0A0B0000, 0x0F100000, 0x090F0000};
	
	noves_fora(numeros,10);
	
	unsigned short *shorts = (unsigned short*)numeros;
	unsigned char *chars = (unsigned char*)numeros;
	
	shorts++;
	int i=0;
	
	while(i<10){
		
		printf("numero a dividir: %hd\n",*shorts);
		printf("o seu resto: %hhd\n\n",*chars);
		shorts+=2;
		chars+=4;
		i++;
	}
	
	return 0;
}
