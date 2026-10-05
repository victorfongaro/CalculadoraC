#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include <math.h>
#include <time.h>

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
void chamar(int opcao, Operacao* operacao, int* execucao);

// --- Protótipos de operacoes.c ---
void soma(Operacao* operacao);
void subtracao(Operacao* operacao);
void multiplicacao(Operacao* operacao);
void divisao(Operacao* operacao);
void exponenciacao(Operacao* operacao);
void raizQuadrada(Operacao* operacao);

// --- Protótipos de operacoesEspeciais.c ---
void somaNvalores(void);
void sequenciaFibonnatti(void);
void areaCirculo(void);
void areaRetangulo(void);
void volumeCubo(void);
void volumeCilindro(void);

// --- Protótipos de arquivo.c ---
void salvar_historico(double a, double b, char op, double res);

#endif // HEADERS_H