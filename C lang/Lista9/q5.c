#include <stdio.h>
#include <stdlib.h>

float *ReallocDesbugado(float *vet, int tamanhoA, int tamanhoF){
    float *newVet;
    newVet = malloc(tamanhoF * sizeof(float));

    for(int i = 0; i<tamanhoA; i++){
        newVet[i] = vet[i];
    }

    free(vet);
    return newVet;
}


void main(){
    FILE *fileTemps = fopen("/home/dspetris/Downloads/lista9/questao5.txt", "r");
    float *temps;
    int tamanho;

    if(fileTemps == NULL){
        printf("Deu merda\n");
        exit(1);
    }

    for(int i = 0; !feof(fileTemps); i++){
        tamanho = i;
        if(i==0)
            temps = malloc(sizeof(float));
        else
            temps = ReallocDesbugado(temps, i+1, i+2);
            
        fscanf(fileTemps, "%f\n", &temps[i]);
    }

    fclose(fileTemps);

    float menor;
    float maior;
    float soma = 0;

    for(int i = 0; i<tamanho; i++){
        soma += temps[i];
        if(i==0) 
            maior = menor = temps[i];
        else{
            if(temps[i] < menor)
                menor = temps[i];
            if(temps[i] > maior)
                maior = temps[i];
        }
    }
    float media = soma/tamanho;
    
    printf("Maior temp: %.2f \nMenor temp: %.2f \nMedia: %f\n", maior, menor, media);

    int acima, abaixo;
    acima = abaixo = 0;

    for(int i = 0; i<tamanho; i++){
        if(temps[i] > media){
            acima++;
        }else if (temps[i] < media){
            abaixo++;
        }
    }

    printf("Dias acima da média: %d \nDias abaixo da média: %d\n", abaixo, acima);


}