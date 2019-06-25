#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* cria_fila(void){
    Fila *new;
    new = malloc(sizeof(Fila));
    new->ini = new->fim = 0;    
    return new;
}

int fila_Vazia (Fila* f){
    if(f != NULL){
        return (f->ini == f->fim);
    }else{
        printf("Fila nula na função Vazia_lista\n");
        exit(1);
    }
}

int fila_Cheia (Fila* f){
    if(f != NULL){
        return (((f->fim + 1) % MaxTam) == f->ini);
    }else{
        printf("Fila nula na função fila_Cheia\n");
        exit(1);
    }
}

void insere (Pessoa* pessoa, Fila* f){
    if (!fila_Cheia(f)){
        f->vet[f->fim] = pessoa;
        f->fim = (f->fim + 1) % MaxTam;
    }else{
        printf("A fila já está cheia! Não foi possível inserir\n");
    }
}

Pessoa* retira (Fila* f){
    if(!fila_Vazia(f)){
        Pessoa *aux;
        aux = f->vet[f->ini];
        f->vet[f->ini] = NULL;
        f->ini = (f->ini + 1) % MaxTam;
        return aux;
    }else{
        printf("A fila está vazia! Não há nada para retirar\n");
        return NULL;
    }
}

void imprime_fila (Fila* f){
    if(f != NULL){
        for(int i = f->ini; i!=f->fim; i = (i+1)%MaxTam){
            imprimepessoa(f->vet[i]);
        }
    }else{
        printf("Fila nula na função imprime_fila\n");
    }
}

void separa_filas (Fila* f, Fila* f_maiores, Fila* f_menores){
    if((f != NULL) && (f_maiores != NULL) && (f_menores != NULL)){
        for(int i = f->ini; i!=f->fim; i = (i+1)%MaxTam){
            Pessoa *atual = f->vet[i];
            if(atual->idade > 60)
                insere(retira(f), f_maiores);
            else
                insere(retira(f), f_menores);
        }
    }else{
        printf("Uma ou mais filas nulas na função separa_filas\n");
        exit(1);
    }
}

Fila* destroi_fila (Fila* f){
    if(f != NULL){
        while(!fila_Vazia(f)){
            Pessoa *aux = retira(f);
            destroi_pessoa(aux);
        }
        free(f);
    }
    return f;
}

