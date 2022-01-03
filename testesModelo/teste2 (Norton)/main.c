#include <stdio.h>
#include "pontuacoes.h"
#include "aprovacoes.h"

int main(){

	unsigned int exames[5] = {0xACB4F501,0x0BB89CF2,0x00C8FF03,0xBAF0E0DD,0x78F0FF05};
	
	int resultado = pontuacao(exames[2]);
	printf("\nresultado = %d\n",resultado);
	
	unsigned int aprovadosArr[5];
	int quantidadeAprovados = aprovados(exames,5,aprovadosArr);
	
	printf("quantidadeAprovados = %d\n",quantidadeAprovados);
	
	printf("\nAprovados: \n");
	for(int i=0;i<quantidadeAprovados;i++){
		printf("  Aprovados[%d] = %d\n", i, *(aprovadosArr+i));
	}
	return 0;
}
