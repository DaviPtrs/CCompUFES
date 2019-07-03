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
            NO *temp = (*raiz)->Dir;
            if(temp != NULL){
                insere_ArvBin(&temp, valor);
            }else{
                (*raiz)->Dir = malloc(sizeof(NO));
                temp = (*raiz)->Dir;
                temp->fill = valor;
                return 1;
            }
        }
        else if(valor < (*raiz)->fill){
            NO *temp = (*raiz)->Esq;
            if(temp != NULL){
                insere_ArvBin(&temp, valor);
            }else{
                (*raiz)->Esq = malloc(sizeof(NO));
                temp = (*raiz)->Esq;
                temp->fill = valor;
                return 1;
            }
        }
    }
    return 0;
}

int consulta_ArvBin(ArvBin *raiz, int valor){
    if(estaVazia_ArvBin(raiz)){   
        return 0;
    }else{
        NO* atual = (*raiz);
        if(valor == atual->fill){
            return 1;
        }else{
            if(valor > atual->fill){
                consulta_ArvBin(&(atual->Dir), valor);
            }else{
                consulta_ArvBin(&(atual->Esq), valor);
            }
        }
    }
}

void libera_NO(NO* no){
    if (no == NULL){
        return;
    }
    libera_NO(no->Dir);
    libera_NO(no->Esq);
    free(no);
}

void libera_ArvBin(ArvBin *raiz){
    if(raiz == NULL){
        return;
    }
    libera_NO(*raiz);
    free(raiz);
}

void preOrdem_ArvBin(ArvBin *raiz){
    if(raiz == NULL){
        return;
    }
    if(*raiz != NULL){
        printf("%d\n", (*raiz)->fill);
        preOrdem_ArvBin(&((*raiz)->Esq));
        preOrdem_ArvBin(&((*raiz)->Dir));
    }
}

void emOrdem_ArvBin(ArvBin *raiz){
    if(raiz == NULL){
        return;
    }
    if(*raiz != NULL){
        preOrdem_ArvBin(&((*raiz)->Esq));
        printf("%d\n", (*raiz)->fill);
        preOrdem_ArvBin(&((*raiz)->Dir));
    }
}

void posOrdem_ArvBin(ArvBin *raiz){
    if(raiz == NULL){
        return;
    }
    if(*raiz != NULL){
        preOrdem_ArvBin(&((*raiz)->Esq));
        preOrdem_ArvBin(&((*raiz)->Dir));
        printf("%d\n", (*raiz)->fill);
    }
}

