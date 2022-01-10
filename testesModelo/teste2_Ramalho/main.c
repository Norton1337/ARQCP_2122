#include <stdio.h>
#include "pontuacoes.h"
#include "aprovacoes.h"

int main(){

	unsigned int exames[5] = {0xACB4F501,0x0BB89CF2,0x00C8FF03,0xBAF0E0DD,0x78F0FF05};
	
	unsigned int aprovadosArr[5];
	int quantidadeAprovados;
	
	quantidadeAprovados = aprovados(exames,5,aprovadosArr);
	printf("\nAlunos aprovados = %d\n",quantidadeAprovados);
	
	printf("\nArray aprovados: \n");
	for(int i=0;i<quantidadeAprovados;i++){
		printf("  Aprovados[%d] = %d\n", i, *(aprovadosArr+i));
	}
	return 0;
}
