#include <stdio.h>
#include "nota.h"
#include "min_max_notas.h"

int main(){
	short quantidade=0;
	unsigned int notas[10] = {0x0B0F0A10, 0x0C0A0907, 0x0B080A0C, 0x0710080A,
		 0x0F120E0F, 0x0E110B0C, 0x0B0F0A0B, 0x0A0B0F10, 0x0F101112, 0x090F0A06};
		 
	quantidade = calcula_notas(notas,10);
	
	printf("\nNota minima da turma: %hhd\n",nota_min);
	printf("Nota maxima da turma: %hhd\n\n",nota_max);
	printf("Numero de alterações: %hd\n\n",quantidade);
	
	return 0;
}
