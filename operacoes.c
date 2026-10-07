#include "headers.h"

void requisicao(double *a, double *b) {
    printf("\nDigite o primeiro valor: ");
    if (scanf("%lf", a) != 1) *a = 0;
    printf("Digite o segundo valor: ");
    if (scanf("%lf", b) != 1) *b = 0;
}

void soma(Operacao* operacao) {
    operacao->tipo = SOMA;
    requisicao(&operacao->num01, &operacao->num02);
    double res = operacao->num01 + operacao->num02;
    printf("Resultado: %.4lf\n", res);
}

void subtracao(Operacao* operacao) {
    operacao->tipo = SUBTRACAO;
    requisicao(&operacao->num01, &operacao->num02);
    double res = operacao->num01 - operacao->num02;
    printf("Resultado: %.4lf\n", res);
}

void multiplicacao(Operacao* operacao) {
    operacao->tipo = MULTIPLICACAO;
    requisicao(&operacao->num01, &operacao->num02);
    double res = operacao->num01 * operacao->num02;
    printf("Resultado: %.4lf\n", res);
}

void divisao(Operacao* operacao) {
    operacao->tipo = DIVISAO;
    requisicao(&operacao->num01, &operacao->num02);
    if (operacao->num02 == 0.0) {
        printf("Erro: divisão por zero não é permitida!\n");
        return;
    }
    double res = operacao->num01 / operacao->num02;
    printf("Resultado: %.4lf\n", res);
}

void exponenciacao(Operacao* operacao) {
    operacao->tipo = EXPONENCIACAO;
    requisicao(&operacao->num01, &operacao->num02);
    double res = pow(operacao->num01, operacao->num02);
    printf("Resultado: %.4lf\n", res);
}

