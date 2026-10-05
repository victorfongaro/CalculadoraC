#include "headers.h"

void requisicao(float *a, float *b){
    printf("\nDigite a: ");
    scanf("%f", &a);
    printf("\nDigite b: ");
    scanf("%f", &b);
}
void soma(float* resultado){
    float a,b;
    requisicao(&a, &b);
    *resultado = a+b;
}

void subtracao(float* resultado){
    float a,b;
    
    *resultado = a-b;
}

void multiplicacao(float* resultado){
    float a, b;
    requisicao(&a, &b);
    *resultado = a*b;
}

void divisao(float* resultado){
    float a, b;
    requisicao(&a, &b);
    *resultado = a/b;
}

void exponenciacao(double* resultado){
    float a,b;
    requisicao(&a, &b);
    *resultado = pow(a,b);
}

void raizQuadrada(double* resultado){
    float a;
    printf("Digite o valor que você quer tirar a raiz quadrada: ");
    scanf("%f", &a);
    *resultado = sqrt(a);
}

void somaNvalores(double* resultado){
    int a;
    float b;
    printf("Digite quantos números você quer somar: \n");
    scanf("%f", &a);
    for (int i = 1; i < a + 1; i++){
        printf("\nDigite o %d termo: ");
        scanf("%f", &b);
        *resultado += b;
    }
    printf("\nInserir mais termos (S | N):");
    if (getchar()== "S"){
        somaNvalores(resultado);
    }
    printf("\n\n\n");
}
