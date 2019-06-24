#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* cria_fila(void){
    Fila *new;
    new = malloc(sizeof(Fila));
    new->topo = 0;
    new->index = NULL;

    return new;
}

int Vazia_fila (Fila* f){
    if(f != NULL){
        return((f->index == NULL) || (f->topo == 0));
    }else{
        printf("Fila nula na função Vazia_lista\n");
        exit(1);
    }
}

void insere (Pessoa* pessoa, Fila* f){
    if(Vazia_fila(f)){
        f->index = malloc(sizeof(tFila));
        f->fim = f->index;
    }else{
        f->fim->prox = malloc(sizeof(tFila));
        f->fim = f->fim->prox;
    }
    f->fim->pessoa = pessoa;
    f->topo++;
}

Pessoa* retira (Fila* f){
    if(!Vazia_fila(f)){
        Pessoa *aux;
        tFila *aux2;
        aux = f->index->pessoa;
        aux2 = f->index;
        f->index = f->index->prox;
        free(aux2);
        f->topo--;
        return aux;
    }else{
        printf("A fila está vazia! Não há nada para retirar\n");
        return NULL;
    }
}

void imprime_fila (Fila* f){
    if(f != NULL){
        int tam = f->topo;
        tFila *aux; 
        for(int i = 0; i<tam; i++){
            if(i == 0){
                aux = f->index;
            }else{
                aux = aux->prox;
            }
            imprimepessoa(aux->pessoa);
        }
    }else{
        printf("Fila nula na função imprime_fila\n");
    }
}

void separa_filas (Fila* f, Fila* f_maiores, Fila* f_menores){
    if((f != NULL) && (f_maiores != NULL) && (f_menores != NULL)){
        int tam = f->topo;
        tFila *aux; 

        for(int i = 0; i<tam; i++){
            aux = f->index;
            Pessoa *atual = aux->pessoa;

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
        while(!Vazia_fila(f)){
            Pessoa *aux = retira(f);
            destroi_pessoa(aux);
        }
        free(f);
    }
    return f;
}

