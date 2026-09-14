#include <stdio.h>
#include <string.h>

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

int main(){
    float* resultado = calloc(1,sizeof(float));
    int execucao = 1, opcao = 0;

    while (execucao){
        menu(&opcao);
        
        switch (opcao)
        {
        case 1:
            soma(&resultado);
            break;
        case 2:
            subtracao(&resultado);
            break;
        
        default:
            break;
        }

    }
}