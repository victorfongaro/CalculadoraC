#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include <math.h>
#include <time.h>
#include <locale.h>

#ifndef QTD_HISTORICO
#define QTD_HISTORICO 10
#endif

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

typedef enum {
    SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO, EXPONENCIACAO, RAIZ
} tipoOperacao;

typedef struct Operacao {
    double num01;
    double num02;
    tipoOperacao tipo;
    struct Operacao* anterior;
} Operacao;

// --- Protótipos de menus.c ---
void menu(int* opcao);
void chamar(int opcao, Operacao* operacao, int* execucao, Operacao* operacaoHistorico);
static void menuEspecial(int* opcao);
static void sair(int *execucao, Operacao* Historico);

// --- Protótipos de operacoes.c ---
void soma(Operacao* operacao);
void subtracao(Operacao* operacao);
void multiplicacao(Operacao* operacao);
void divisao(Operacao* operacao);
void exponenciacao(Operacao* operacao);


// --- Protótipos de operacoesEspeciais.c ---
void sequenciaFibonnatti(void);
void areaCirculo(void);
void areaRetangulo(void);
void volumeCubo(void);
void volumeCilindro(void);
void raizQuadrada(void);
void somaNvalores(void);

// --- Protótipos de arquivo.c ---
int gravarHistorico(Operacao* operacao);
Operacao* recuperarHistorico(void);

#endif // HEADERS_H