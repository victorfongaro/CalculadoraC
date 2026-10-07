#include "headers.h"




int gravarHistorico(Operacao* operacao){
    FILE* arquivo = fopen("../historico.dat","ab");
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
    FILE* arquivo = fopen("../historico.dat","rb");
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
    fclose(arquivo);
    return inicio;
}


void mostrarHistorico(Operacao* operacaoHistorico){
    Operacao* inicio = operacaoHistorico;
    if (inicio == NULL)
        return;
    char* tipo = NULL;
    for (int i = 1; inicio != NULL; inicio = inicio ->anterior, i++){
        if (inicio->tipo == SOMA){
            tipo = realloc(tipo, (strlen("soma") + 1) * sizeof(char));
            if (tipo != NULL)
                strcpy(tipo, "soma");
        } else{
            if (inicio->tipo == SUBTRACAO){
            tipo = realloc(tipo, (strlen("subtração") + 1) * sizeof(char));
            if (tipo != NULL)
                strcpy(tipo, "subtração");
        } else{
            if (inicio->tipo == DIVISAO){
            tipo = realloc(tipo, (strlen("divisão") + 1) * sizeof(char));
            if (tipo != NULL)
                strcpy(tipo, "divisão");
        } else {
            tipo = realloc(tipo, (strlen("multiplicação") + 1) * sizeof(char));
            if (tipo != NULL)
                strcpy(tipo, "multiplicação");
        }
        }
        }
        if (tipo == NULL)
            return;
        printf("%d - num01[ %lf ] - num02[ %lf ] - operação [%s]\n",i, inicio->num01, inicio->num02, tipo);
    }
    free(tipo);
}
