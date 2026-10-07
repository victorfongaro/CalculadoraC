#include "headers.h"



void menu(int* opcao) {
    printf("+------------------------------------+\n");
    printf("|             CALCULADORA            |\n");
    printf("+------------------------------------+\n\n");
    printf("Bem-vindo! Escolha uma das operações abaixo:\n\n");
    printf(" 1.  Soma\n");
    printf(" 2.  Subtração\n");
    printf(" 3.  Multiplicação\n");
    printf(" 4.  Divisão\n");
    printf(" 5.  Exponenciação\n");
    printf("20.  Calculadora Especial\n");
    printf("--------------------------------------\n");
    printf(" 0.  Sair\n");
    printf("--------------------------------------\n\n");
 
    printf(">> Escolha uma opção: ");
    if (scanf("%d", opcao) != 1) {
        *opcao = -1; 
        return;
    }

    if (*opcao == 20) {
        menuEspecial(opcao);
    }
}

static void menuEspecial(int* opcao) {
    printf("\n--- CALCULADORA ESPECIAL ---\n");
    printf(" 6.  Raiz quadrada\n");
    printf(" 7.  Soma de n valores\n");
    printf(" 8.  Cálculo da Sequência de Fibonacci\n");
    printf(" 9.  Área do círculo\n");
    printf("10.  Área do retângulo\n");
    printf("11.  Volume do cubo\n");
    printf("12.  Volume do cilindro\n");
    printf(">> Escolha uma opção especial: ");
    if (scanf("%d", opcao) != 1) {
        *opcao = -1;
    }
}

void chamar(int opcao, Operacao* operacao, int* execucao, Operacao* operacaoHistorico) {
    switch (opcao) {
        case 1: soma(operacao); break;
        case 2: subtracao(operacao); break;
        case 3: multiplicacao(operacao); break;
        case 4: divisao(operacao); break;
        case 5: exponenciacao(operacao); break;
        // Operações especiais chamadas sem parâmetros
        case 6: raizQuadrada(); break;
        case 7: somaNvalores(0); break;
        case 8: sequenciaFibonnatti(); break;
        case 9: areaCirculo(); break;
        case 10: areaRetangulo(); break;
        case 11: volumeCubo(); break;
        case 12: volumeCilindro(); break;
        case 0: sair(execucao, operacaoHistorico); break;
        default:
            printf("\nOpção inválida, por favor, escolha outra.\n");
            sleep(2); 
            break;
    }
}

static void sair(int *execucao,Operacao* operacaoHistorico) {
    printf("\nMuito obrigado por utilizar nossa calculadora!\n\n");
    Operacao* atual = operacaoHistorico;
    Operacao* proximo;

    while (atual != NULL) {
        proximo = atual->anterior; 
        free(atual);            
        atual = proximo;          
    }

    operacaoHistorico = NULL;

    *execucao = 0;
}