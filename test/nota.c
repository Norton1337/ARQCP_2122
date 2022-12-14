#include <stdio.h>
#include "min_max_notas.h"

unsigned char nota_final;

short calcula_notas(unsigned int *notas, int n){
	char flag = 0;
	short numero_alteracoes = 0;
	int i = 0;
	
	unsigned char *chars = (unsigned char*)notas; //apontador do tipo char para percorrer o array de 8 em 8 bits
	
	for(i = 0; i < n; i++){
		nota_final = (*chars * 0.2) + (*(chars + 1) * 0.2) + (*(chars + 2) * 0.2) + (*(chars + 3) * 0.4); //calcular a nota final acedendo as primeiras quatro posições de 8 em 8 bits do array.
		chars += 4; //incrementa o array chars para a posição seguinte do array notas
		flag = min_max_notas();
		if(flag == 1){ //comparação para saber se existiu alteração
			numero_alteracoes++;
		}
	}
	return numero_alteracoes;
}
