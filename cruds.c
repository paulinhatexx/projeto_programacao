#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"menus.h"
#include"modulos.h"
#include"validacoes.h"
#include"leituras.h"



typedef struct receita Receita;
typedef struct despesa Despesa;
typedef struct pagamento Pagamento;
typedef struct produto Produto;

typedef struct receita{
   char origem[26];
   float valor[9];
   char data[11];
   char status;
};

typedef struct despesa{
   char tipo[26];
   float valor[9];
   char data[11];
};

typedef struct pagamento{
   char destino[31];
   float valor[9];
   char data[11];
   char status;
};

typedef struct produto{
   char tipo[26];
   char valor[9];
   char data[11];
};

   Receita* cadastrarReceita(void){
    Receita* rec;
    rec = (Receita*) malloc(sizeof(Receita));
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                      ** Cadastrar Receita **                      ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite a origem da receita:                                      ///\n");
    scanf(" %25[^\n]", rec->origem);
    printf("///Digite o valor da receita:                                        /// \n");
    scanf(" %8[^\n]", rec->valor);
    printf("/// Digite a data da receita (dd/mm/aaaa):                           /// \n");
    scanf(" %10[^\n]", rec->data);
    rec->status = 'a';
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return rec;
   
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

Pagamento* cadastrarPagamento(void){
    Pagamento* pag;
    pag = (Pagamento*) malloc(sizeof(Pagamento));
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                      ** Cadastrar Pagamento **                    ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("Digite o destino do Pagamento:               \n");
    scanf(" %30[^\n]", pag->destino);
    printf("Digite o valor do pagamento:                \n");
    scanf("%8[^\n]" , pag->valor);
    printf("Digite a data de vencimento (dd/mm/aaaa): ");
    scanf("%10[^\n]", pag->data);
    pag->status = 'a';
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return pag;
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

Despesa* cadastrarDespesa(void){
    Despesa* des;
    des = (Despesa*) malloc(sizeof(Despesa));
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                      ** Cadastrar Despesa **                      ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("Digite o tipo de Despesa :               \n");
    scanf("%25[^\n]", des->tipo );
    printf("Digite o valor da despesa :                \n");
    scanf("%8[^\n]", des->valor);
    printf("Digite a data de despesa (dd/mm/aaaa): ");
    scanf("%10[^\n]", des->data);
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return des;
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

Produto* incluirProduto(void){
     Produto* pro;
    pro = (Produto*) malloc(sizeof(Produto));
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                      ** Cadastrar Produto **                      ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("\n///   **   Incluir Produto  **   ///\n\n");
    printf("Digite o tipo de Produto :               \n");
    scanf("%25[^\n]", pro->tipo  );
    printf("Digite o valor do produto :              \n");
    scanf("%25[^\n]", pro->valor);
    printf("Digite a data de compra (dd/mm/aaaa): ");
    scanf("%25[^\n]", pro->data);
    dataValida(dia, mes, ano);
    while(!dataValida(data[0], data[1], data[2])){
    printf("\nData invalida! Digite novamente (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&data[0], &data[1], &data[2]);
    return pro;
    }
  
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
