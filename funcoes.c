#include<stdio.h>
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

int dataValida(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12 || dd < 1) {
    return 0;
  }
  if (mm == 2) {
    if (bissexto(aa)) {
      maiorDia = 29;
    } else {
      maiorDia = 28;
    }
  } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maiorDia = 30;
  } else {
    maiorDia = 31;
  }
  if (dd > maiorDia) {
    return 0;
  }
 return 1;
}

int bissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}