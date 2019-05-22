#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

Matriz* inicializaMatriz(int nLinhas, int nColunas){
    if((nLinhas <= 0) || (nColunas <= 0)){
        printf("O número de linhas e colunas deve ser maior que zero\n");
        return NULL;
    }


    Matriz* matrizInicializada;
    matrizInicializada = (Matriz *) malloc(sizeof(Matriz));

    matrizInicializada->nLinhas = nLinhas;
    matrizInicializada->nColunas = nColunas;

    matrizInicializada->conteudo = (int **) malloc(nLinhas * sizeof(int *));

    for(int i = 0; i<nLinhas; i++){
        matrizInicializada->conteudo[i] = (int *) malloc(nColunas * sizeof(int));
    }

    if(matrizInicializada->conteudo == NULL){
        printf("Houve um erro na alocação da matriz\n");
        return NULL;
    }
    // return NULL;
    return matrizInicializada;
}

void modificaElemento (Matriz* mat, int linha, int coluna, int elem){
    if((linha <= 0) || (coluna <= 0)){
        printf("O número de linhas e colunas deve ser maior que zero\n");
        return NULL;
    }else if ((mat == NULL) || (mat->conteudo == NULL)){
        printf("A matriz não existe.\n");
        return NULL;
 
    }else if ((linha > mat->nLinhas) || (coluna > mat->nColunas)){
        printf("A linha e/ou coluna não é valida para essa matriz\n");
        return NULL;
    }

    mat->conteudo[linha][coluna] = elem;

    if(mat->conteudo[linha][coluna] != elem){
        printf("Matriz não foi modificada\n");
    }
}

int recuperaElemento(Matriz* mat, int linha, int coluna){
    if((linha <= 0) || (coluna <= 0)){
        printf("O número de linhas e colunas deve ser maior que zero\n");
        return NULL;
    }else if ((mat == NULL) || (mat->conteudo == NULL)){
        printf("A matriz não existe.\n");
        return NULL;
 
    }else if ((linha > mat->nLinhas) || (coluna > mat->nColunas)){
        printf("A linha e/ou coluna não é valida para essa matriz\n");
        return NULL;
    }
    
    if(mat->conteudo[linha][coluna] == NULL){
        printf("Matriz não foi modificada\n");
        return NULL;
    }else{
        return mat->conteudo[linha][coluna];
    }
}

int recuperaNColunas (Matriz* mat){
    return mat->nColunas;
}

int recuperaNLinhas (Matriz* mat){
    return mat->nLinhas;
}

// void main(){
//     Matriz* mat;
// // 	// //chamando a funcao do TAD Matriz que inicializa a matriz 
// 	mat = inicializaMatriz(4, 4);

//     free(mat);
// }




