#include <stdio.h>
#include "min_max_notas.h"

unsigned char nota_final;

short calcula_notas(unsigned int *notas, int n){
	char flag = 0;
	short numero_alteracoes = 0;
	int i = 0, j = 0;
	
	unsigned char *chars = (unsigned char*)notas; //apontador em char para percorrer o array de 8 em 8 bits
	
	for(i = 0; i < n; i++){
		nota_final = (*chars * 0.2) + ((*chars + 1) * 0.2) + ((*chars + 2) * 0.2) + ((*chars + 3) * 0.2) //calcular a nota final acedendo as primeiras quatro posições de 8 em 8 bits do array.;
		chars += 4;
		flag = min_max_notas();
		if(flag == '1'){
			numero_alteracoes++;
		}
	}
	return numero_alteracoes;
}
