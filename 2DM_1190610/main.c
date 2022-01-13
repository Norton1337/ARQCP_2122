#include <stdio.h>
#include "nota.h"
#include "extremos.h"

int main(){

	unsigned int notas[5] = {0x00E00C01,0x00A00B02,0x00800903,0x01100F04,0x01000E05};
	unsigned short nota_min, nota_max;
	int aprovados;
	
	aprovados = extremos(notas, 5, &nota_min, &nota_max);
	printf("\nAlunos aprovados = %d\n",aprovados);
	printf("Nota minima: %hd\n", nota_min);
	printf("Nota maxima: %hd\n", nota_max);
	return 0;
}
