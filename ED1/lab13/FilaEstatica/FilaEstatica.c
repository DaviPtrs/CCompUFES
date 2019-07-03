#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h" //inclui os Prot�tipos

//Defini��o do tipo Fila
struct fila{
    int inicio, final;
    int qtd;
    struct aluno dados[MAX];
};

int remDir(Fila *deck, Aluno *al){
    if(!Fila_vazia(deck)){
        *al = deck->dados[deck->final];
        deck->final = ((deck->final-1)%MAX);
        if(deck->final < 0){
            deck->final = MAX + deck->final;
        }
        deck->qtd--;
        return 1;
    }
    return 0;
}

int remEsq(Fila *deck, Aluno *al){
    if(desinfileira(deck, al)){
        return 1;
    }
    return 0;
}

int insDir(Fila *deck, Aluno al){
    if(insere_Fila(deck, al)){
        return 1;
    }
    return 0;
}

int insEsq(Fila *deck, Aluno al){
    if(!Fila_cheia(deck)){
        deck->inicio = (deck->inicio-1)%MAX;
        if(deck->inicio < 0){
            deck->inicio = MAX + deck->inicio;
        }
        deck->dados[deck->inicio] = al;
        return 1;
    }
    return 0;
}

Fila* cria_Fila(){
    Fila *fi;
    fi = (Fila*) malloc(sizeof(struct fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
        fi->qtd = 0;
    }
    return fi;
}

void libera_Fila(Fila* fi){
    free(fi);
}

int consulta_Fila(Fila* fi, struct aluno *al){
    if(fi == NULL || Fila_vazia(fi))
        return 0;
    int pos = (fi->inicio+1)%MAX;
    *al = fi->dados[pos];
    return 1;
}

int desinfileira(Fila* fi, struct aluno *al){
    if(fi == NULL || Fila_vazia(fi))
        return 0;
    int pos = (fi->inicio+1)%MAX;
    fi->inicio = (fi->inicio+1)%MAX;
    *al = fi->dados[pos];
     fi->qtd--;
    return 1;
}


int insere_Fila(Fila* fi, struct aluno al){
    if(fi == NULL)
        return 0;
    if(Fila_cheia(fi))
        return 0;
    fi->dados[fi->final] = al;
    fi->final = ((fi->final+1)%MAX); 
    fi->qtd++;
    return 1;
}


int tamanho_Fila(Fila* fi){
    if(fi == NULL)
        return -1;
    return fi->qtd;
}

int Fila_cheia(Fila* fi){
    if(fi == NULL)
        return -1;
    //if (fi->inicio == (fi->final+1)%MAX)
    if (fi->qtd == MAX)
        return 1;
    else
        return 0;
}

int Fila_vazia(Fila* fi){
    if(fi == NULL)
        return -1;
    return (fi->qtd == 0);
}

void imprime_Aluno(Aluno a){
   printf("Matricula: %d\n",a.matricula);
   printf("Nome: %s\n",a.nome);
        printf("Notas: %f %f %f\n",a.n1,
                                   a.n2,
                                   a.n3);
        printf("-------------------------------\n");


} 

void imprime_Fila(Fila* fi){
    if(fi == NULL)
        return;
    int i = fi->inicio;
    for(int j = 0; j<fi->qtd; i = ((i+1)%MAX), j++){
        imprime_Aluno(fi->dados[i]);   
    }
}


