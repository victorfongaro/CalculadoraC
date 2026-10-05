#include "headers.h"


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
    printf("20. Calculadora Especial");
 
    printf("\n--------------------------------------\n");
    printf(" 0.  Sair\n");
    printf("--------------------------------------\n\n");
 
    printf(">> Escolha uma opção: ");
    scanf("%d", opcao);
    if ( *opcao == 20){
        menuEspecial(opcao);
    }
}

void menuEspecial(int* opcao){
    printf(" 8.  Cálculo da Sequência de Fibonacci\n");
    printf(" 9.  Área do círculo\n");
    printf("10.  Área do retângulo\n");
    printf("11.  Volume do cubo\n");
    printf("12.  Volume do cilindro\n");
}


void chamar(opcao, Operacao* operacao, int* execucao){

        switch (opcao)
        {
        case 1:
            soma(operacao);
            break;
        case 2:
            subtracao(operacao);
            break;
        case 3:
            multiplicacao(operacao);
            break;
        case 4:
            divisao(operacao);
            break;
        case 5:
            exponenciacao(operacao);
            break;
        case 6:
            raizQuadrada(operacao);
            break;
        case 7:
            somaNvalores(operacao);
            break;
        case 8:
            sequenciaFibonnatti(operacao);
            break;
        case 9:
            areaCirculo(operacao);
            break;
        case 10:
            areaRetangulo(operacao);
            break;
        case 11:
            volumeCubo(operacao);
            break;
        case 12:
            volumeCilindro(operacao);
            break;
        case 0:
            sair(execucao);
        default:
            printf("Opção inválida, por favor, escolha outra.");
            sleep(10);
            break;
        }
}


void sair(int *execucao){
    printf("\n\n\n\n\n\n\n\n\nMuito obrigado por utilizar nossa calculadora!!!\n\n\n\n");
    *execucao = 0;
}