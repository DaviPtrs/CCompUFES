#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

ArvBin* cria_ArvBin(){
    ArvBin *new = malloc(sizeof(ArvBin));
    if(new != NULL)
        *new = NULL;
    else
        printf("Alocação de nova árvore falhou!\n");
    return new;
}

int estaVazia_ArvBin(ArvBin *raiz){
    if(raiz == NULL){
        printf("Arvore nula na função estaVazia_ArvBin!\n");
        exit(1);
    }else{
        return ((*raiz) == NULL);
    }
}

int insere_ArvBin(ArvBin* raiz, int valor){
    if(estaVazia_ArvBin(raiz)){
        (*raiz) = malloc(sizeof(NO));
        (*raiz)->fill = valor;
        return 1;
    }else{
        if(valor > (*raiz)->fill){
            if((*raiz)->Dir != NULL){
                insere_ArvBin(&(*raiz)->Dir, valor);
            }else{
                (*raiz)->Dir = malloc(sizeof(NO));
                (*raiz)->Dir->fill = valor;
                return 1;
            }
        }
        else if(valor < (*raiz)->fill){
            if((*raiz)->Esq != NULL){
                insere_ArvBin(&(*raiz)->Esq, valor);
            }else{
                (*raiz)->Esq = malloc(sizeof(NO));
                (*raiz)->Esq->fill = valor;
                return 1;
            }
        }
    }
    return 0;
}