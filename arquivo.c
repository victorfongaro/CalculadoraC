#include "headers.h"




int gravarHistorico(Operacao* operacao){
    FILE* arquivo = fopen("historico.dat","ab");
    if (arquivo == NULL){
        return 1;
    }
    if (operacao == NULL){
        fclose(arquivo);
        return 2;
    }
    fwrite(operacao, sizeof(Operacao), 1, arquivo);
    fclose(arquivo);
    return 0;
}


Operacao* recuperarHistorico(void){
    FILE* arquivo = fopen("historico.dat","rb");
    if (arquivo == NULL){
        return NULL;
    }

    Operacao* inicio = NULL; 
    Operacao temp;
    int historico = 0;

    while (fread(&temp, sizeof(Operacao), 1, arquivo) == 1 && historico < QTD_HISTORICO) {
        Operacao* novo_no = (Operacao*)malloc(sizeof(Operacao));
        if (novo_no == NULL) {
            printf("Erro de alocação de memória ao carregar histórico.\n");
            break;
        }

        novo_no->num01 = temp.num01;
        novo_no->num02 = temp.num02;
        novo_no->tipo  = temp.tipo;
        
        novo_no->anterior = inicio; 
        inicio = novo_no;        
        
        historico++;
}
    return inicio;
    fclose(arquivo);

}



