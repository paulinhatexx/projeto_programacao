#include <stdio.h>

char telaPrincipal(void);
char menuReceita(void);
char menuPagamentos(void);
char menuDespesa(void);
char menuProduto(void);
char menuConsulta(void);
void sobre(void);

void moduloReceitas(void);
void moduloPagamentos(void);
void moduloDespesas(void);
void moduloProduto(void);
void moduloConsultas(void);

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

int main (void){
    
    char opcao;
    do{
       opcao= telaPrincipal();
       switch(opcao){
           case '1': moduloReceitas();
           break;
           case '2': moduloPagamentos();
           break;
           case '3': moduloDespesas();
           break;
           case '4': moduloProduto();
           break;
           case '5': moduloConsultas();
           break;
           case '6': sobre();
           break;

       }

    }while(opcao!= '0');
    
    return 0;
}



void sobre(void){
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///            Universidade Federal do Rio Grande do Norte            ///\n");
    printf("///               Centro de Ensino Superior do Seridó                 ///\n");
    printf("///               Departamento de Computação e Tecnologia             ///\n");
    printf("///                 Disciplina DCT1106 -- Programação                 ///\n");
    printf("///           Projeto Sistema de Gestão de Finanças Domésticas        ///\n");
    printf("///                 Developed by @paulinhatexx - Sep,2020             ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///         === Sistema de Gestão de Finanças Domésticas ===          ///\n"); 
    printf("///                                                                   ///\n");  
    printf("///                      === SIG-Finance ===                          ///\n");
    printf("///                                                                   ///\n");
    printf("///   Programa a ser desenvolvido na discipina Programação, tendo     ///\n");
    printf("///  como objetivo o controle de finanças doméstica, buscando o       ///\n");
    printf("///  equilíbrio do orçamento familiar.O programa deve realizar o      ///\n");
    printf("///  monitoramento do fluxo financeiro de uma residência através do   ///\n");
    printf("///  registro de receitas, despesas, compras e pagamentos,podendo     ///\n");
    printf("///  conter outras eventuais funcionalidades.                         ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("Tecle ENTER pra continuar...\n");
    getchar();

    
    
}

char telaPrincipal(void) {
    char op;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                      ** Menu Principal **                         ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Receitas                                                       ///\n");
    printf("/// 2. Pagamentos                                                     ///\n");
    printf("/// 3. Despesas                                                       ///\n");
    printf("/// 4. Produto                                                        ///\n");
    printf("/// 5. Consultas                                                      ///\n");
    printf("/// 6. Sobre                                                          ///\n");
    printf("/// 0.Sair                                                            ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    scanf("%c", &op);
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
    return op;
         
}

char menuReceita(void) {
    char op;
    
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                      ** Menu Receita **                           ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Cadastrar receita                                              ///\n");
    printf("/// 2. Atualizar receita                                              ///\n");
    printf("/// 3. Excluir Receita                                                ///\n");
    printf("/// 0. Voltar ao Menu Anterior                                        ///\n");
    printf("///                                                                   ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    scanf("%c", &op);
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
    return op;
}

char menuPagamentos(void) {
    char op;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                      ** Menu Pagamentos **                        ///\n");
    printf("///                                                                   ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Cadastrar Pagamento                                            ///\n");
    printf("/// 2. Atualizar Pagamento                                            ///\n");
    printf("/// 3. Excluir Pagamento                                              ///\n");
    printf("/// 0. Voltar ao Menu Anterior                                        ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    scanf("%c", &op);
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
    return op;
         
}

char menuDespesa(void) {
    char op;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                     ** Menu Despesas **                           ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Cadastrar Despesa                                              ///\n");
    printf("/// 2. Atualizar Despesa                                              ///\n");
    printf("/// 3. Excluir Despesa                                                ///\n");
    printf("/// 0. Voltar ao Menu Anterior                                        ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    scanf("%c", &op);
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
    return op;
         
}

char menuProduto(void) {
    char op;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                 ** Menu Produto/Serviço  **                       ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Incluir Novo Produto/ Serviço                                  ///\n");
    printf("/// 2. Alterar Produto/ Serviço                                       ///\n");
    printf("/// 3. Excluir Produto/ Serviço                                       ///\n");
    printf("/// 0. Voltar ao Menu Anterior                                        ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    scanf("%c", &op);
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
    return op;
         
}

char menuConsulta(void) {
    char op;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///|                                                                 |///\n");
    printf("///|                    *** SIG-Finance ***                          |///\n");
    printf("///|                                                                 |///\n");
    printf("///|_________________________________________________________________|///\n");
    printf("///                    ** Menu Consulta  **                           ///\n");
    printf("///                                                                   ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Consultar Orçamento                                            ///\n");
    printf("/// 2. Consultar Despesas                                             ///\n");
    printf("/// 3. Consultar Pagamentos                                           ///\n");
    printf("/// 0. Voltar ao Menu Anterior                                        ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    scanf("%c", &op);
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
    return op;
}


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

