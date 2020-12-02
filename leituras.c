#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "validacoes.h"

char* leitura(void);

char* lerReceita(void){
    char *receita;
    receita= leitura();
    while(!ehLetra(receita)){
        printf("Dados Inválidos!!");
        printf("Tente Novamente!");
        receita= leitura();
    }
    return receita;

}




char* leitura(void) {
	int tam;
	char dadoLido[256];
	char *dadoSalvo;
	scanf(" %255[^\n]", dadoLido);
	tam = strlen(dadoLido) + 1;
	dadoSalvo = (char*) malloc(tam * sizeof(char));
	strcpy(dadoSalvo, dadoLido);
	return dadoSalvo;
}

