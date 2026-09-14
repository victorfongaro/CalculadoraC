#include <stdio.h>
#include <string.h>

void menu(){
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
    
}

void soma(float a, float b, float* result){
    *resultado = a+b;
}

void subtracao(float a, float b, float* result){
    *resultado = a-b;
}

int main(){
    float* resultado = calloc(1,sizeof(float));
    int execucao = 1;
    while (execucao){
        menu();
        
        switch (expression)
        {
        case constant expression:
            /* code */
            break;
        
        default:
            break;
        }

    }
}