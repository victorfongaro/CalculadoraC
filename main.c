#include "headers.h"


int main(){
    Operacao* operacao = malloc(1* sizeof(Operacao));
    int execucao = 1, opcao = 0;
    if (resultado == NULL){
        printf("Erro ao iniciar calculadora!!!!!!");
        return 1;
    }
    while (execucao){
        menu(&opcao);
        chamar(opcao, resultado, &execucao);
    }
    return 0;
}