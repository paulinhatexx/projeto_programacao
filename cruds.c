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
    getchar();
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
    FILE* fp;
    Receita* rec;
    int achou;
    char resp;
    char alterar[26];
    fp = fopen("receita.dat", "r+b");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
       printf("Não é possível continuar o programa...\n");
        exit(1);
    }
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    **   Excluir  Receita **                       ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite a receita a ser excluida:                                 ///\n");
    scanf(" %14[^\n]",alterar);
    rec = (Receita*) malloc(sizeof(Receita));
    achou = 0;
    while((!achou)&&(fread(rec,sizeof(Receita), 1,fp))){
       if((strcmp(rec->origem, alterar) == 0) && (rec->status == '1')){
         achou = 1;
       }
    }
  
    if (achou) {
        exibeReceita(rec);
        getchar();
        printf("Deseja realmente apagar esta receita (s/n)? ");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
            rec->status = '0';
            fseek(fp, (-1)*sizeof(Receita), SEEK_CUR);
            fwrite(rec, sizeof(Receita), 1, fp);
            printf("\nReceita excluída com sucesso!!!\n");
        } else {
            printf("\n Os dados não foram alterados\n");
        }
     } else {
         printf("Esta receita %s não foi encontrada..\n", alterar);
    }
    free(rec);
    fclose(fp);
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
}

void atualizarPagamento(void){
    FILE* fp;
    int achou;
    char resp;
    char alterar[26];
    fp = fopen("pagamento.dat" , "r+b");
    if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
    Pagamento* pag;
    achou = 0;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    **   Atualizar  Pagamento **                   ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite o pagamento a ser alterado:                               ///\n");
    scanf(" %25[^\n]", alterar);
    getchar();
    pag = (Pagamento*) malloc(sizeof(Pagamento));
    while((!achou)&&(fread(pag,sizeof(Pagamento), 1,fp))){
       if((strcmp(pag->destino, alterar) == 0) && (pag->status == '1')){
           achou = 1;
       }
   }
    if (achou){
        exibePagamento(pag);
        printf("Deseja alterar  este  pagamento?(s/n)");
        scanf("%c",&resp);
        if (resp =='s' || resp == 'S'){
        printf("///  Digite o destino do pagamento:                                  ///\n");
        scanf(" %25[^\n]", pag->destino);
        printf("///Digite o valor do pagamento:                                      /// \n");
        scanf(" %8[^\n]", pag->valor);
        printf("/// Digite a data de vencimento (dd/mm/aaaa):                        /// \n");
        scanf(" %10[^\n]", pag->data);
        pag->status = '1';
        fseek(fp, (-1)*sizeof(Pagamento), SEEK_CUR);
        fwrite(pag, sizeof(Pagamento), 1, fp);
        printf("\nPagamento  atualizado!!!\n");
    
    } else {
        printf("\n Os dados não serão alterados\n");
      }
} else {
     printf("Este pagamento %s não foi encontrado !!\n", alterar);
        }
    free(pag);
    fclose(fp);
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("Tecle ENTER pra continuar..");
    getchar();
}

void excluirPagamento(void){
    FILE* fp;
    Pagamento* pag;
    int achou;
    char resp;
    char alterar[26];
    fp = fopen("pagamento.dat", "r+b");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
       printf("Não é possível continuar o programa...\n");
        exit(1);
    }
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    **   Excluir Pagamento **                     ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite o pagamento a ser excluido:                               ///\n");
    scanf(" %14[^\n]",alterar);
    pag = (Pagamento*) malloc(sizeof(Pagamento));
    achou = 0;
    while((!achou)&&(fread(pag,sizeof(Pagamento), 1,fp))){
       if((strcmp(pag->destino, alterar) == 0) && (pag->status == '1')){
         achou = 1;
       }
    }
  
    if (achou) {
        exibePagamento(pag);
        getchar();
        printf("Deseja realmente apagar este pagamento (s/n)? ");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
            pag->status = '0';
            fseek(fp, (-1)*sizeof(Pagamento), SEEK_CUR);
            fwrite(pag, sizeof(Pagamento), 1, fp);
            printf("\nPagamento excluído com sucesso!!!\n");
        } else {
            printf("\n Os dados não foram alterados\n");
            }
        } else{
         printf("Este pagamento%s não foi encontrado..\n", alterar);
    }      
        free(pag);
        fclose(fp);
        printf("///                                                                   ///\n");
        printf("///                                                                   ///\n");
        printf("/////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        printf("Tecle ENTER pra continuar..");
        getchar();
}



void cadastrarDespesa(void){
    Despesa* des;
    des = (Despesa*) malloc(sizeof(Despesa));
    FILE* fp;
    fp = fopen("despesa.dat" , "ab");
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
    fseek(fp, (-1)*sizeof(Despesa), SEEK_CUR);
    fwrite(des, sizeof(Despesa), 1, fp);
    printf("\nDespesa cadastrada!!\n");
    printf("\nTecle enter para voltar...");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    free(des);
    fclose(fp);
    getchar();
}
/*void gravaDespesa (Despesa* des){
   FILE* fp;
   fp = fopen("despesa.dat" , "ab");
   if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
   fwrite(des, sizeof(Despesa), 1, fp);
   fclose(fp);
   getchar();
}*/

void exibeDespesa (Despesa* des){
   printf(" Tipo da despesa: %s\n" , des->tipo);
   printf("Valor da despesa: %s\n" , des->valor);
   printf("Data da despesa: %s\n" , des->data);

}

void atualizarDespesa(void){
    FILE* fp;
    int achou;
    char resp;
    char alterar[26];
    fp = fopen("despesa.dat" , "r+b");
    if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
    Despesa* des;
    achou = 0;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    **   Atualizar Despesa **                      ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite a despesa a ser alterada:                                 ///\n");
    scanf(" %25[^\n]", alterar);
    getchar();
    des = (Despesa*) malloc(sizeof(Despesa));
    while((!achou)&&(fread(des,sizeof(Despesa), 1,fp))){
       if((strcmp(des->tipo, alterar) == 0) && (des->status == '1')){
         achou = 1;
       }
   }
    if (achou){
        exibeDespesa(des);
        printf("Deseja alterar esta despesa?(s/n)");
        scanf("%c",&resp);
        if (resp =='s' || resp == 'S'){
        printf("///  Digite o tipo de despesa:                                      ///\n");
        scanf(" %25[^\n]", des->tipo);
        printf("///Digite o valor da despesa:                                       /// \n");
        scanf(" %8[^\n]", des->valor);
        printf("/// Digite a data da despesa (dd/mm/aaaa):                           /// \n");
        scanf(" %10[^\n]", des->data);
        des->status = '1';
        fseek(fp, (-1)*sizeof(Despesa), SEEK_CUR);
        fwrite(des, sizeof(Despesa), 1, fp);
        printf("\nDespesa  atualizada!!!\n");
        }else {
            printf("\n Os dados não serão alterados\n");
       }
       } else {
        printf("Esta despesa %s não foi encontrada !!\n", alterar);
        printf("Tecle enter para voltar...");
    }
        free(des);
        fclose(fp);
        getchar();
        printf("///                                                                   ///\n");
        printf("///                                                                   ///\n");
        printf("/////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
}

void excluirDespesa(void){
    FILE* fp;
    Despesa* des;
    int achou;
    char resp;
    char alterar[26];
    fp = fopen("despesa.dat", "r+b");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
       printf("Não é possível continuar o programa...\n");
        exit(1);
    }
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    **   Excluir  Despesa **                       ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite a despesa a ser excluida:                                 ///\n");
    scanf(" %14[^\n]",alterar);
    des = (Despesa*) malloc(sizeof(Despesa));
    achou = 0;
    while((!achou)&&(fread(des,sizeof(Despesa), 1,fp))){
       if((strcmp(des->tipo, alterar) == 0) && (des->status == '1')){
         achou = 1;
       }
    }
  
    if (achou) {
        exibeDespesa(des);
        getchar();
        printf("Deseja realmente apagar esta despesa (s/n)? ");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
            des->status = '0';
            fseek(fp, (-1)*sizeof(Despesa), SEEK_CUR);
            fwrite(des, sizeof(Despesa), 1, fp);
            printf("\nDespesa excluída com sucesso!!!\n");
        } else {
            printf("\n Os dados não foram alterados\n");
        }
     } else {
         printf("Esta despesa %s não foi encontrada..\n", alterar);
    }
    free(des);
    fclose(fp);
}
   

void incluirProduto(void){
    Produto* pro;
    pro = (Produto*) malloc(sizeof(Produto));
    FILE* fp;
    fp = fopen("produto.dat" , "ab");
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
    fseek(fp, (-1)*sizeof(Produto), SEEK_CUR);
    fwrite(pro, sizeof(Produto), 1, fp);
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\nTECLE ENTER PARA VOLTAR");
    getchar();
    free(pro);
    fclose(fp);
 
  
 }

/*void gravaProduto (Produto* pro){
   FILE* fp;
   fp = fopen("produto.dat" , "ab");
   if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
   fwrite(pro, sizeof(Produto), 1, fp);
   fclose(fp);
}*/

void exibeProduto (Produto* pro){
   printf(" Tipo de Produto: %s\n" , pro->tipo);
   printf("Valor do Produto: %s\n" , pro->valor);
   printf("Data da compra : %s\n" , pro->data);
   printf("Status: %c\n" , pro->status);
}

void alterarProduto(void){
    FILE* fp;
    int achou;
    char resp;
    char alterar[26];
    fp = fopen("produto.dat" , "r+b");
    if (fp == NULL){
      printf("Ocorreu um erro na abertura do arquivo!!");
      exit(1);
   }
    Produto* pro;
    achou = 0;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    **   Alterar Produto **                        ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite o produto a ser alterado:                                 ///\n");
    scanf(" %25[^\n]", alterar);
    getchar();
    pro = (Produto*) malloc(sizeof(Produto));
    while((!achou)&&(fread(pro,sizeof(Produto), 1,fp))){
       if((strcmp(pro->tipo, alterar) == 0) && (pro->status == '1')){
         achou = 1;
       }
   }
    if (achou){
        exibeProduto(pro);
        printf("Deseja alterar este produto?(s/n)");
        scanf("%c",&resp);
        if (resp =='s' || resp == 'S'){
        printf("///  Digite o tipo de produto:                                      ///\n");
        scanf(" %25[^\n]", pro->tipo);
        printf("///Digite o valor do produto:                                       /// \n");
        scanf(" %8[^\n]", pro->valor);
        printf("/// Digite a data de compra (dd/mm/aaaa):                           /// \n");
        scanf(" %10[^\n]", pro->data);
        pro->status = '1';
        fseek(fp, (-1)*sizeof(Produto), SEEK_CUR);
        fwrite(pro, sizeof(Produto), 1, fp);
        printf("\nProduto  atualizado!!!\n");
        }else {
            printf("\n Os dados não serão alterados\n");
       }
       } else {
        printf("Este produto %s não foi encontrado !!\n", alterar);
    }
        free(pro);
        fclose(fp);
        printf("///                                                                   ///\n");
        printf("///                                                                   ///\n");
        printf("/////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
}

void excluirProduto(void){
    FILE* fp;
    Produto* pro;
    int achou;
    char resp;
    char alterar[26];
    fp = fopen("produto.dat", "r+b");
    if (fp == NULL) {
       printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
       printf("Não é possível continuar o programa...\n");
        exit(1);
    }
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    **   Excluir  Produto **                       ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("///  Digite o produto a ser excluido:                                 ///\n");
    scanf(" %14[^\n]",alterar);
    pro = (Produto*) malloc(sizeof(Produto));
    achou = 0;
    while((!achou)&&(fread(pro,sizeof(Produto), 1,fp))){
       if((strcmp(pro->tipo, alterar) == 0) && (pro->status == '1')){
         achou = 1;
       }
    }
  
    if (achou) {
        exibeProduto(pro);
        getchar();
        printf("Deseja realmente apagar este produto (s/n)? ");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
            pro->status = '0';
            fseek(fp, (-1)*sizeof(Produto), SEEK_CUR);
            fwrite(pro, sizeof(Produto), 1, fp);
            printf("\nProduto excluído com sucesso!!!\n");
        } else {
            printf("\n Os dados não foram alterados\n");
        }
     } else {
         printf("Este produto %s não foi encontrada..\n", alterar);
    }
    free(pro);
    fclose(fp);
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
