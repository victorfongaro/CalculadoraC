#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 




void menu(int* opcao){
    printf("+------------------------------------+\n");
    printf("|             CALCULADORA             |\n");
    printf("+------------------------------------+\n\n");
 
    printf("Bem-vindo! Escolha uma das operações abaixo:\n\n");
 
    printf(" 1.  Soma\n");
    printf(" 2.  Subtração\n");
    printf(" 3.  Multiplicação\n");
    printf(" 4.  Divisão\n");
    printf(" 5.  Exponenciação\n");
    printf(" 6.  Raiz quadrada\n");
    printf(" 7.  Soma de n valores\n");
    printf(" 8.  Cálculo da Sequência de Fibonacci\n");
    printf(" 9.  Área do círculo\n");
    printf("10.  Área do retângulo\n");
    printf("11.  Volume do cubo\n");
    printf("12.  Volume do cilindro\n");
 
    printf("\n--------------------------------------\n");
    printf(" 0.  Sair\n");
    printf("--------------------------------------\n\n");
 
    printf(">> Escolha uma opção: ");
    scanf("%d", opcao);
    
}

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
    return;
}

void divisao(float* resultado){
    return;
}

void exponenciacao(float* resultado){
    return;
}

void raizQuadrada(float* resultado){
    return;
}

void somaNvalores(float* resultado){
    return;
}

void sequenciaFibonnatti(float* resultado){
    return;
}

void areaCirculo(float* resultado){
    return;
}

void areaRetangulo(float* resultado){
    return;
}

void volumeCubo(float* resultado){
    return;
}

void volumeCilindor(float* resultado){
    return;
}

void sair(int *execucao){
    printf("\n\n\n\n\n\n\n\n\nMuito obrigado por utilizar nossa calculadora!!!\n\n\n\n");
    *execucao = 0;
}
int main(){
    float* resultado = calloc(1,sizeof(float));
    int execucao = 1, opcao = 0;
    if (resultado == NULL){
        printf("Erro ao iniciar calculadora!!!!!!");
        return 1;
    }
    while (execucao){
        menu(&opcao);
        
        switch (opcao)
        {
        case 1:
            soma(resultado);
            break;
        case 2:
            subtracao(resultado);
            break;
        case 3:
            multiplicacao(resultado);
            break;
        case 4:
            divisao(resultado);
            break;
        case 5:
            exponenciacao(resultado);
            break;
        case 6:
            raizQuadrada(resultado);
            break;
        case 7:
            somaNvalores(resultado);
            break;
        case 8:
            sequenciaFibonnatti(resultado);
            break;
        case 9:
            areaCirculo(resultado);
            break;
        case 10:
            areaRetangulo(resultado);
            break;
        case 11:
            volumeCubo(resultado);
            break;
        case 12:
            volumeCilindro(resultado);
            break;
        case 0:
            sair(&execucao);
        default:
            printf("Opção inválida, por favor, escolha outra.");
            sleep(10);
            break;
        }
    }
    return 0;
}