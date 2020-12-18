#include<stdio.h>
#include"menus.h"
#include"cruds.h"
#include<stdlib.h>

void moduloReceitas(void){
    system("clear||cls");
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
    system("clear||cls");
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
    system("clear||cls");
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
    system("clear||cls");
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
    system("clear||cls");
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


