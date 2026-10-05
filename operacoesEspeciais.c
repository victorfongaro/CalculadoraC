#include "headers.h"


void sequenciaFibonnatti(double* resultado){
    int a, n1 = 1, n2 = 1, n3;
    
    printf("Digite quantos números você quer gerar: \n");
    scanf("%f", &a);
    
    if (a>0)
        printf("%d",n1);
    else
        return;
    
    for (int i = 1; i < a -1; i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
}

void areaCirculo(double* resultado){
    return;
}

void areaRetangulo(double* resultado){
    return;
}

void volumeCubo(float* resultado){
    return;
}

void volumeCilindor(float* resultado){
    return;
}