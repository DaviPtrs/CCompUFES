#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"

Fila* cria_fila(void){
    Fila* new;
    new = malloc(sizeof(Fila));
    new->aux = cria_pilha();
    new->aux2 = cria_pilha();

    return new;
}

void insere (Pessoa* pessoa, Fila* f){
    if((pessoa!=NULL) && (f != NULL))
        push(pessoa, f->aux);
    else{
        printf("Pessoa e/ou fila NULOS na função insere!\n");
        exit(1);
    }
}

void trocaPilha(Pilha* p1, Pilha* p2){ //tira da pilha1 e coloca na pilha2
    if((p1 != NULL) && (p2 != NULL)){
        while(!vazia_pilha(p1)){
            push(pop(p1), p2);
        }
    }else{
        printf("Filas nulas na função trocaPilha!\n");
        exit(1);
    }
}

Pessoa* retira (Fila* f){
    if(f != NULL){
        trocaPilha(f->aux, f->aux2);
        Pessoa* retirada = pop(f->aux2);
        trocaPilha(f->aux2, f->aux);

        return retirada;
    }else{
        printf("Fila nula na função retira!\n");
        return NULL;
    }
}

void imprime_fila (Fila* f){
    if(f != NULL){
        int topo = f->aux->topo;
        for(int i = 0; i<topo; i++){
            imprimepessoa(f->aux->vet[i]);
        }
    }else{
        printf("Fila nula na função imprime_fila!\n");
        exit(1);
    }
}

int vazia_Fila (Fila* f){
    if(f != NULL){
        return (vazia_pilha(f->aux2) && vazia_pilha(f->aux));
    }else{
        printf("Fila nula na função vazia_fila!\n");
        return 0;
    }
}

void separa_filas (Fila* f, Fila* f_maiores, Fila* f_menores){
    if((f != NULL) && (f_maiores != NULL) && (f_menores != NULL)){
        while(!vazia_Fila(f)){
            Pessoa* atual = pop(f->aux);
            if(atual->idade > 60){
                insere(atual, f_maiores);
            }else{
                insere(atual, f_menores);
            }
        }
    }else{
        printf("Filas nulas na função separa_filas!\n");
        exit(1);
    }
}

Fila* destroi_fila (Fila* f){
    if(f != NULL){
        destroi_pilha(f->aux);
        destroi_pilha(f->aux2);
        free(f);
    }
    return NULL;
}