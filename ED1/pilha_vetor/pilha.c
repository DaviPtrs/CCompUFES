#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Pilha* cria_pilha(){
    Pilha *duracel;
    duracel = malloc(sizeof(Pilha));
    duracel->topo = -1;

    return duracel;
}

int pilhaVazia(Pilha* energizer){
    return (energizer->topo == -1);
}

void imprime_pilha (Pilha* duracel){
    if(!pilhaVazia(duracel)){
        puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        for(int i = 0; i<=duracel->topo; i++){
            Pessoa *atual = duracel->pessoas[i];

            printf("Pessoa %d\n", i+1);
            printf("Nome: %s\n", atual->nome);
            printf("Idade: %d\n", atual->idade);
            printf("Endereço: %s\n", atual->end);
            puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        }
    }else{
        printf("A pilha está vazia! Não foi possível imprimir.\n");
    }
}

Pilha* destroi_pilha(Pilha* pilha){
    if(!pilhaVazia(pilha)){
        for(int i = 0; i<=pilha->topo; i++){
            Pessoa *atual = pilha->pessoas[i];
            free(atual->nome);
            free(atual->end);
            free(atual);
        }
    }
    free(pilha);
    return pilha;
}

Pessoa* inicializaPessoa(char* nome, int idade, char* endereco){
    if((nome == NULL) || (idade < 0) || (endereco == NULL)){
        printf("Dados inválidos na função inicializaPessoa!\n");
        return NULL;
    }
    Pessoa *sujeito = malloc(sizeof(Pessoa));
    sujeito->nome = malloc((strlen(nome) + 1) * sizeof(char));
    strcpy(sujeito->nome, nome);
    sujeito->end = malloc((strlen(endereco) + 1) * sizeof(char));
    strcpy(sujeito->end, endereco);
    sujeito->idade = idade;

    return sujeito;
}

void push(Pessoa* pessoa, Pilha* pilha){
    if(pilha != NULL){
        if(pilha->topo == 9){
            printf("A pilha está cheia! Não foi possível inserir.\n");
        }else{
            pilha->topo++;
            pilha->pessoas[pilha->topo] = pessoa;
        }
    }else{
        printf("Não existe! Não foi possível inserir.\n");
    }
}

Pessoa* pop(Pilha* pilha){
    if(pilhaVazia(pilha)){
        printf("A pilha está vazia! Não há nada para retirar\n");
        return NULL;
    }
    Pessoa *individuo = pilha->pessoas[pilha->topo];
    pilha->topo--;

    return individuo;
    
}
