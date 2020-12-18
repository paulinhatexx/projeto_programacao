#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"menus.h"
#include"modulos.h"
#include"validacoes.h"
#include"cruds.h"

void cadastrarReceita(void){

    Receita* rec;
    rec = (Receita*) malloc(sizeof(Receita));
    FILE* fp;
    fp = fopen("receita.dat" , "ab");
    if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
    }
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
    scanf(" %26[^\n]", rec->origem);
    getchar();
    printf("///  Digite o valor da receita:                                      /// \n");
    scanf(" %9[^\n]", rec->valor);
    getchar();
    printf("/// Digite a data da receita (dd/mm/aaaa):                           /// \n");
    scanf(" %11[^\n]", rec->data);
    getchar();
    rec->status = '1';
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n"); 

    printf("\nTECLE ENTER PARA VOLTAR");
    getchar();  
    fwrite(rec, sizeof(Receita), 1, fp);
    fclose(fp);
    free(rec);
}
/*
void gravaReceita (Receita* rec){
   FILE* fp;
   fp = fopen("receita.dat" , "ab");
   if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
   fwrite(rec, sizeof(Receita), 1, fp);
   fclose(fp);
}
*/
void exibeReceita (Receita* rec){


   printf("Origem da receita: %s\n" , rec->origem);
   printf("Valor da receita: %s\n" , rec->valor);
   printf("Data da receita: %s\n" , rec->data);
   //printf("Status: %c\n" , rec->status);

}

void atualizarReceita(void){
    FILE* fp;
    int achou;
    char resp;
    char alterar[26];
    fp = fopen("receita.dat" , "r+b");
    if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
    Receita* rec;
    achou = 0;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    **   Atualizar  Receita **                     ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite a receita a ser alterada:                                 ///\n");
    scanf(" %25[^\n]", alterar);
    rec = (Receita*) malloc(sizeof(Receita));
    while((!achou)&&(fread(rec,sizeof(Receita), 1,fp))){
       if((strcmp(rec->origem, alterar) == 0) && (rec->status == '1')){
         achou = 1;
       }
   }
    if (achou){
     exibeReceita(rec);
     printf("Deseja alterar a esta receita?(s/n)");
     scanf("%c",&resp);
      if (resp =='s' || resp == 'S'){
       printf("///  Digite a origem da receita:                                      ///\n");
       scanf(" %25[^\n]", rec->origem);
       printf("///Digite o valor da receita:                                        /// \n");
       scanf(" %8[^\n]", rec->valor);
       printf("/// Digite a data da receita (dd/mm/aaaa):                           /// \n");
       scanf(" %10[^\n]", rec->data);
       rec->status = '1';
       fseek(fp, (-1)*sizeof(Receita), SEEK_CUR);
       fwrite(rec, sizeof(Receita), 1, fp);
       printf("\nReceita  atualizada!!!\n");
      }else {
       printf("\n Os dados não serão alterados\n");
      }
    } else {
     printf("Esta receita %s não foi encontrada !!\n", alterar);
    }
    free(rec);
    fclose(fp);
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void excluirReceita(void){
    printf("\n///  **    Excluir Receita   **   ///\n\n");
    printf("Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
    getchar();
}

void cadastrarPagamento(void){
    Pagamento* pag;
    pag = (Pagamento*) malloc(sizeof(Pagamento));
   FILE* fp;
   fp = fopen("pagamento.dat" , "ab");
   if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
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
    scanf(" %8[^\n]" , pag->valor);
    printf("Digite a data de vencimento (dd/mm/aaaa): ");
    scanf(" %10[^\n]", pag->data);
    getchar();
    pag->status = '1';
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    printf("\nTECLE ENTER PARA VOLTAR");
    getchar(); 
    fwrite(pag, sizeof(Pagamento), 1, fp);
    fclose(fp);
    free(pag);
    exibePagamento(pag);
}

void exibePagamento (Pagamento* pag){
   printf("Destino do Pagamento: %s\n" , pag->destino);
   printf("Valor do Pagamento: %s\n" , pag->valor);
   printf("Vencimento do Pagamento: %s\n" , pag->data);
   printf("Status: %c\n" , pag->status);
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
    scanf(" %25[^\n]", des->tipo );
    getchar();
    printf("Digite o valor da despesa :                \n");
    scanf(" %8[^\n]", des->valor);
    getchar();
    printf("Digite a data de despesa (dd/mm/aaaa): ");
    scanf(" %10[^\n]", des->data);
    getchar();
    des->status = '1';
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nTECLE ENTER PARA VOLTAR");
    getchar();
    gravaDespesa(des);
    free(des);
    exibeDespesa(des);
}
void gravaDespesa (Despesa* des){
   FILE* fp;
   fp = fopen("despesa.dat" , "ab");
   if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
   fwrite(des, sizeof(Despesa), 1, fp);
   fclose(fp);
}

void exibeDespesa (Despesa* des){
   printf(" Tipo da despesa: %s\n" , des->tipo);
   printf("Valor da despesa: %s\n" , des->valor);
   printf("Data da despesa: %s\n" , des->data);
   printf("Status: %c\n" , des->status);
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
    scanf(" %25[^\n]", pro->tipo  );
    getchar();
    printf("Digite o valor do produto :              \n");
    scanf(" %25[^\n]", pro->valor);
    getchar();
    printf("Digite a data de compra (dd/mm/aaaa): ");
    scanf(" %25[^\n]", pro->data);
    getchar();
    pro->status = '1';
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nTECLE ENTER PARA VOLTAR");
    getchar();
    gravaProduto(pro);
    free(pro);
    exibeProduto(pro);
 
  
 }

void gravaProduto (Produto* pro){
   FILE* fp;
   fp = fopen("produto.dat" , "ab");
   if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
   fwrite(pro, sizeof(Produto), 1, fp);
   fclose(fp);
}

void exibeProduto (Produto* pro){
   printf(" Tipo de Produto: %s\n" , pro->tipo);
   printf("Valor do Produto: %s\n" , pro->valor);
   printf("Data da compra : %s\n" , pro->data);
   printf("Status: %c\n" , pro->status);
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
