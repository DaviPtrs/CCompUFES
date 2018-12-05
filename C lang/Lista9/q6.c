#include <stdio.h>
#include <stdlib.h>

int *ReallocDesbugado(int *vet, int tamanhoA, int tamanhoF){
    int *newVet;

    newVet = malloc(tamanhoF * sizeof(int));

    for(int i = 0; i<tamanhoA; i++){
        newVet[i] = vet[i];
    }

    free(vet);
    return newVet;
}

int *transcribe(FILE *arq, int *tamanho){
    int *dados;
    int num;

    for(int i = 0; !feof(arq); ){
        fscanf(arq, "%d\n", &num);
        if(i == 0)
            dados = malloc(sizeof(int));
        else
            dados = ReallocDesbugado(dados, i+1, i+2);
        dados[i] = num;
        i++;
        *tamanho = i;
        
    }

    return dados;
}

int *contaVotos(int *votos, int votosQtd){
    int *contagem;
    int *resultado;

    contagem = calloc(5+1, sizeof(int));
    resultado = malloc(5*sizeof(int));
    //resultado = {candidato mais votado, votos, candidato menos votado, votos, numero de nulos}

    for(int i = 0; i<votosQtd; i++){
        int voto = votos[i];
        if((voto >= 1) && (voto <= 5))
            contagem[voto]++;
        else
            contagem[0]++;
    }

    for(int i = 1; i<=5; i++){
        if(i==1){
            resultado[0] = i;
            resultado[1] = contagem[i];
            resultado[2] = i;
            resultado[3] = contagem[i];
        }else if(contagem[i] > resultado[1]){
            resultado[0] = i;
            resultado[1] = contagem[i];
        }else if(contagem[i] < resultado[3]){
            resultado[2] = i;
            resultado[3] = contagem[i];
        }
    }
    resultado[4] = contagem[0];

    free(contagem);
    return resultado;
}


void main(){
    FILE *fileVotos = fopen("votos.txt", "r");
    int *votos;
    int votosQtd;

    if(fileVotos == NULL){
        printf("Ih rapaiz, deu bosta\n");
        exit(1);
    }

    votos = transcribe(fileVotos, &votosQtd);
    fclose(fileVotos);

    int *resultado = contaVotos(votos, votosQtd);

    printf("Candidato %d é o mais votado com %d votos\n", resultado[0], resultado[1]);
    printf("Candidato %d é o menos votado com %d votos\n", resultado[2], resultado[3]);
    printf("Houveram %d votos nulos. Total de votos: %d\n", resultado[4], votosQtd);

    free(votos);
    free(resultado);
    
}