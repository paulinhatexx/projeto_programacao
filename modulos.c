#include<stdio.h>
#include"menus.h"

void moduloReceitas(void){
    char opcao;
    do{
        opcao= menuReceita();
        switch (opcao){
           case '1': cadastrarReceita();
           break;
           case '2': atualizarReceita();
           break;
           case '3': excluirReceita();
           break;

       }

    } while (opcao != '0');
}

void moduloPagamentos(void){
    char opcao;
    do{
        opcao= menuPagamentos();
        switch (opcao){
           case '1': cadastrarPagamento();
           break;
           case '2': atualizarPagamento();
           break;
           case '3': excluirPagamento();
           break;
           
       }

    } while (opcao !='0');
}


void moduloDespesas(void){
    char opcao;
    do{
        opcao= menuDespesa();
        switch (opcao){
           case '1': cadastrarDespesa();
           break;
           case '2': atualizarDespesa();
           break;
           case '3': excluirDespesa();
           break;

       }

    } while (opcao !='0');
}

void moduloProduto(void){
    char opcao;
    do{
        opcao= menuProduto();
        switch (opcao){
           case '1': incluirProduto();
           break;
           case '2': alterarProduto();
           break;
           case '3': excluirProduto();
           break;
       }

    } while (opcao !='0');
}

void moduloConsultas(void){
    char opcao;
    do{
        opcao= menuConsulta();
        switch (opcao){
           case '1': consultarOrcamento();
           break;
           case '2': consultarDespesas();
           break;
           case '3': consultarPagamentos();
           break;
           
       }

    } while (opcao !='0');
}


void cadastrarReceita(void){
   printf("\n///  **   Cadastrar Receita  **   ///\n\n");
    printf("Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
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
    printf("\n///  **   Cadastrar Pagamento  **   ///\n\n");
    printf("Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
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
    printf("\n///   **   Cadastrar Despesa  **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
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
    printf("\n///   **   Incluir Produto  **   ///\n\n");
    printf(" Em desenvolvimento...\n\n");
    printf("Tecle ENTER pra continuar..");
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
