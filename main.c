#include "headers.h"

// Victor Fongaro - 2867060
// Mateus Otávio da Silva - 2866978


int main(void) {
    setlocale(LC_ALL, "");
    int opcao = -1;
    int execucao = 1;
    
    Operacao* operacao_atual = malloc(1*sizeof(Operacao));
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

            if (opcao >= 1 && opcao <= 5 && gravarHistorico(operacao_atual) != 0) {
                printf("Erro ao gravar o histórico.\n");
            }
            
            if (execucao) {
                printf("\nPressione ENTER para continuar...");
                getchar();
                getchar();
                system("clear || cls");
            }
        }
    }

    // Libera a memória antes de sair
    free(operacao_atual);
    return 0;
}