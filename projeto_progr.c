#include <stdio.h>
#include"menus.h"
#include"modulos.h"
#include"validacoes.h"
#include"cruds.h"
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



