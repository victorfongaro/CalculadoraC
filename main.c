#include "headers.h"

int main(void) {
    int opcao = -1;
    int execucao = 1;
    
    Operacao* operacao_atual = (Operacao*)malloc(sizeof(Operacao));
    if (operacao_atual == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }
    Operacao* operacaoHistorico = recuperarHistorico();
    operacao_atual->anterior = NULL;

    while (execucao) {
        menu(&opcao);
        
        if (opcao != -1 && opcao != 20) {
            chamar(opcao, operacao_atual, &execucao, operacaoHistorico);
            
            if (execucao) {
                printf("\nPressione ENTER para continuar...");
                getchar(); // Limpa o buffer anterior
                getchar(); // Aguarda o ENTER
                system("clear || cls"); // Limpa o terminal no Linux ou Windows
            }
        }
    }

    // Libera a memória antes de sair
    free(operacao_atual);
    return 0;
}