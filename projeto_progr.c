#include <stdio.h>

void menuSobre(void);
void menuReceita(void);
void menuPagamentos(void);
void menuDespesa(void);


int main (void){
    menuSobre();
getchar();
    
    return 0;
}



void menuSobre(void){
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
}

void menuReceita(void) {
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                  |///\n");
    printf("///                     *** SIG-Finance ***                          |///\n");
    printf("///                                                                  |///\n");
    printf("///__________________________________________________________________|///\n");
    printf("///                      ** Menu Receita **                           ///\n");
    printf("///                                                                   ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Cadastrar receita                                              ///\n");
    printf("/// 2. Atualizar receita                                              ///\n");
    printf("/// 3. Excluir Receita                                                ///\n");
    printf("/// 4. Voltar ao Menu Anterior                                        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
         
}

void menuPagamentos(void) {
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                  |///\n");
    printf("///                     *** SIG-Finance ***                          |///\n");
    printf("///                                                                  |///\n");
    printf("///__________________________________________________________________|///\n");
    printf("///                      ** Menu Pagamentos **                        ///\n");
    printf("///                                                                   ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Cadastrar Pagamento                                            ///\n");
    printf("/// 2. Atualizar Pagamento                                            ///\n");
    printf("/// 3. Excluir Pagamento                                              ///\n");
    printf("/// 4. Voltar ao Menu Anterior                                        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
         
}

void menuDespesa(void) {
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                  |///\n");
    printf("///                     *** SIG-Finance ***                          |///\n");
    printf("///                                                                  |///\n");
    printf("///__________________________________________________________________|///\n");
    printf("///                     ** Menu Despesas **                           ///\n");
    printf("///                                                                   ///\n");
    printf("/// Escolha a opção desejada:                                         ///\n");
    printf("///                                                                   ///\n");
    printf("/// 1. Cadastrar Despesa                                              ///\n");
    printf("/// 2. Atualizar Despesa                                              ///\n");
    printf("/// 3. Excluir Despesa                                                ///\n");
    printf("/// 4. Voltar ao Menu Anterior                                        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
         
}