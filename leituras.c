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

char* lerData(void){
    char *data;
    data= leitura();
    while(!dataValida(data)){
        printf("Data Inválida!!");
        printf("Tente Novamente!");
        data = leitura();
    }
    return data;

}

char* lerDespesa(void){
    char *despesa;
    despesa= leitura();
    while(!ehLetra(despesa)){
        printf("Dados Inválidos!!");
        printf("Tente Novamente!");
        despesa = leitura();
    }
    return despesa;

}
char* lerPagamento(void){
    char *pagamento;
    pagamento= leitura();
    while(!ehLetra(pagamento)){
        printf("Dados Inválidos!!");
        printf("Tente Novamente!");
        pagamento = leitura();
    }
    return pagamento;

}

char* lerProduto(void){
    char *produto;
    produto= leitura();
    while(!ehLetra(produto)){
        printf("Dados Inválidos!!");
        printf("Tente Novamente!");
        produto = leitura();
    }
    return produto;

}

float* lerValor(void){
    char *valor;
    valor= leitura();
    while(!ehDigito(valor)){
        printf("Dados Inválidos!!");
        printf("Tente Novamente!");
        valor = leitura();
    }
    return valor;

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

