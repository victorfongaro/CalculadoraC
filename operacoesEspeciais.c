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