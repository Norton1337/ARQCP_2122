#include <stdio.h>
#include "verifica.h"
#include "apostas.h"

int main(){
	
	unsigned int apostas[5] = {0x51CECD99, 0x4FECDD91, 0x3ACDFC19, 0x299EEF19, 0x113ABCDE};
	unsigned int chave_sorteada = 0x0ACEEF19;
	unsigned char premiadas[5];
	
	
	int quantidadePremiada = apostas_premiadas(apostas,5,chave_sorteada,premiadas);
	
	printf("Quantidade premiada = %d\n", quantidadePremiada);
	
	printf("\nPremiados: \n");
	for(int i=0;i<quantidadePremiada;i++){
		
		printf("	Premiados[%d]: %hhd\n", i, *(premiadas+i));
		
	}
	
	return 0;
}
