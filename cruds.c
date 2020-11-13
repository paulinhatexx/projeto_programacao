#include<stdio.h>
#include"menus.h"
#include"modulos.h"
#include"validacoes.h"

void cadastrarReceita(void);
void atualizarReceita(void);
void excluirReceita(void);

void cadastrarPagamento(void);
void atualizarPagamento(void);
void excluirPagamento(void);

void cadastrarDespesa(void);
void atualizarDespesa(void);
void excluirDespesa(void);

void incluirProduto(void);
void alterarProduto(void);
void excluirProduto(void);

void consultarOrcamento(void);
void consultarDespesas(void);
void consultarPagamentos(void);



void cadastrarReceita(void){
   char tipo_receita [15];
   float valor_receita;

   printf("\n///  **   Cadastrar Receita  **   ///\n\n");
   printf("\n///_______________________________///\n\n");
   printf("\n                                        \n");
   printf("Digite o tipo de receita:                 \n");
   scanf("%s", tipo_receita);
   printf("Digite o valor da receita:                \n");
   scanf("%f", &valor_receita);
   getchar(); 
}
void atualizarReceita(void){
printf("\n///   **    Atualizar Receita   **   ///\n\n");
    printf("Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();
}

void excluirReceita(void){
    printf("\n///  **    Excluir Receita   **   ///\n\n");
    printf("Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();
}

void cadastrarPagamento(void){
    char tipo_pagamento[50];
    float valor_pagamento;
    int data_venc [3];
    int dia = data_venc[0];
    int mes = data_venc[1];
    int ano = data_venc[2];

    printf("\n///  **   Cadastrar Pagamento  **   ///\n\n");
    printf("\n///_______________________________///\n\n");
    printf("\n                                        \n");
    printf("Digite o tipo de Pagamento:               \n");
    scanf("%s", tipo_pagamento );
    printf("Digite o valor do pagamento:                \n");
    scanf("%f", &valor_pagamento);
    printf("Digite a data de vencimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data_venc[0], &data_venc[1], &data_venc[2]);
    dataValida(dia, mes, ano);
    while(!dataValida(data_venc[0], data_venc[1], data_venc[2])){
    printf("\nData invalida! Digite novamente (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data_venc[0], &data_venc[1], &data_venc[2]);
    getchar();
}

void atualizarPagamento(void){
    printf("\n///   **   Atualizar Pagamento  **///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();

}

void excluirPagamento(void){
    printf("\n///   **   Excluir Pagamento  **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();
}

void cadastrarDespesa(void){

    char tipo_despesa[];
    float valor_despesa;
    int data [3];
    int dia = data[0];
    int mes = data[1];
    int ano = data[2];
    printf("\n///   **   Cadastrar Despesa  **   ///\n\n");
    printf("\n///_______________________________///\n\n");
    printf("\n                                        \n");
    printf("Digite o tipo de Despesa :               \n");
    scanf("%s", tipo_despesa );
    printf("Digite o valor da despesa :                \n");
    scanf("%f", &valor_despesa);
    printf("Digite a data de despesa (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    dataValida(dia, mes, ano);
    while(!dataValida(data[0], data[1], data[2])){
    printf("\nData invalida! Digite novamente (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    getchar();
}

void atualizarDespesa(void){
    printf("\n///   **   Atualizar Despesa  **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();
}

void excluirDespesa(void){
    printf("\n///   **   Excluir Despesa  **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();
}

void incluirProduto(void){
    char tipo_produto[];
    float valor_produto;
    int data [3];
    int dia = data[0];
    int mes = data[1];
    int ano = data[2];
    printf("\n///   **   Incluir Produto  **   ///\n\n");
    printf("Digite o tipo de Produto :               \n");
    scanf("%s", tipo_produto );
    printf("Digite o valor do produto :              \n");
    scanf("%f", &valor_produto);
    printf("Digite a data de compra (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    dataValida(dia, mes, ano);
    while(!dataValida(data[0], data[1], data[2])){
    printf("\nData invalida! Digite novamente (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    getchar();
 }

void alterarProduto(void){
    printf("\n///   **   Alterar Produto  **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();
}

void excluirProduto(void){
    printf("\n///   **   Excluir Produto  **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();

}

void consultarOrcamento(void){
    printf("\n///   **  Consultar Orçamento **  ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();

}

void consultarDespesas(void){
    printf("\n///   ** Consultar Despesas **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();

}

void consultarPagamentos(void){
    printf("\n///  ** Consultar Pagamento **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();

}