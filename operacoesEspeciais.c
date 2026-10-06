#include "headers.h"

void sequenciaFibonnatti(void) {
    int quantidade;
    long long n1 = 0, n2 = 1, proximo; // Utiliza long long para evitar overflow em sequências grandes

    printf("\nDigite quantos números da sequência de Fibonacci quer gerar: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade inválida!\n");
        return;
    }

    printf("Sequência: ");
    for (int i = 1; i <= quantidade; i++) {
        printf("%lld ", n1);
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
    }
    printf("\n");
}

void areaCirculo(void) {
    double raio, area;
    
    printf("\nDigite o raio do círculo: ");
    if (scanf("%lf", &raio) == 1 && raio >= 0) {
        area = M_PI * raio * raio;
        printf("Área do círculo: %.4lf\n", area);
    } else {
        printf("Valor inválido!\n");
    }
}

void areaRetangulo(void) {
    double base, altura, area;
    
    printf("\nDigite a base do retângulo: ");
    if (scanf("%lf", &base) != 1 || base < 0) return;
    
    printf("Digite a altura do retângulo: ");
    if (scanf("%lf", &altura) != 1 || altura < 0) return;

    area = base * altura;
    printf("Área do retângulo: %.4lf\n", area);
}

void volumeCubo(void) {
    double aresta, volume;
    
    printf("\nDigite a medida da aresta do cubo: ");
    if (scanf("%lf", &aresta) == 1 && aresta >= 0) {
        volume = pow(aresta, 3);
        printf("Volume do cubo: %.4lf\n", volume);
    } else {
        printf("Valor inválido!\n");
    }
}

void volumeCilindro(void) {
    double raio, altura, volume;
    
    printf("\nDigite o raio da base do cilindro: ");
    if (scanf("%lf", &raio) != 1 || raio < 0) return;
    
    printf("Digite a altura do cilindro: ");
    if (scanf("%lf", &altura) != 1 || altura < 0) return;

    volume = M_PI * pow(raio, 2) * altura;
    printf("Volume do cilindro: %.4lf\n", volume);
}

void raizQuadrada(void) {
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

void somaNvalores(void) {
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