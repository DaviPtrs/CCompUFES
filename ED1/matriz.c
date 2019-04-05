#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

Matriz* inicializaMatriz (int nLinhas, int nColunas){
    if((nLinhas <= 0) || (nColunas <= 0)){
        printf("O número de linhas e colunas deve ser maior que zero\n");
    }

    Matriz* matrizInicializada;

    matrizInicializada->nLinhas = nLinhas;
    matrizInicializada->nLinhas = nColunas;

    matrizInicializada->conteudo = (int **) malloc(nLinhas * sizeof(int *));

    for(int i = 0; i<nLinhas; i++){
        matrizInicializada->conteudo[i] = (int *) malloc(nColunas * sizeof(int));
    }

    if((matrizInicializada->conteudo == NULL) || (matrizInicializada->conteudo[0] == NULL)){
        printf("Houve um erro na alocação da matriz\n");
        return NULL;
    }

    return matrizInicializada;
}


