#include "headers.h"

static void requisicao(double *a, double *b) {
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

void raizQuadrada(Operacao* operacao) {
    operacao->tipo = RAIZ;
    printf("\nDigite o valor para raiz quadrada: ");
    if (scanf("%lf", &operacao->num01) != 1 || operacao->num01 < 0) {
        printf("Erro: valor inválido ou negativo!\n");
        return;
    }
    operacao->num02 = 0;
    double res = sqrt(operacao->num01);
    printf("Resultado: %.4lf\n", res);
}

void somaNvalores(Operacao* operacao) {
    int total_termos;
    double valor, acumulador = 0.0;
    char resposta;

    printf("\nDigite quantos números você quer somar: ");
    if (scanf("%d", &total_termos) != 1 || total_termos <= 0) {
        printf("Quantidade inválida.\n");
        return;
    }

    for (int i = 1; i <= total_termos; i++) {
        printf("Digite o %dº termo: ", i);
        if (scanf("%lf", &valor) == 1) {
            acumulador += valor;
        }
    }

    operacao->tipo = SOMA;
    operacao->num01 = acumulador;
    operacao->num02 = 0;

    printf("Subtotal atual: %.4lf\n", acumulador);
    printf("Deseja inserir mais termos? (S/N): ");
    scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's') {
        somaNvalores(operacao);
    }
}