#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include <math.h>
#include <time.h>


typedef enum{
    SOMA,
    SUBTRACAO,
    DIVISAO,
    MULTIPLICACAO,
    RAIZ,
    EXPONENCIACAO
}tipoOperacao;

typedef struct Operacao {
    double num01;
    double num02;
    tipoOperacao tipo;
    Operacao* Anterior;
}Operacao;


// --- Protótipos de menus.c ---
void exibir_menu_principal(void);
int ler_opcao(void);

// --- Protótipos de operacoes.c ---
double somar(double a, double b);
double subtrair(double a, double b);

// --- Protótipos de arquivo.c ---
void salvar_historico(double a, double b, char op, double res);




#endif