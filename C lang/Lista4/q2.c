#include <stdio.h>    
#include <stdlib.h>  



int somaVetInt(int vetor[], int tamanho){;
    int soma = 0;
    for(int i = 0; i<tamanho; i++){
        soma += vetor[i];
    }
    return soma;
}

void main(){  
    int vet[10] = {1,2,3,4,5,6,7,8,9,10}; //soma=55
    int tamanho = sizeof(vet)/4;
    printf("Soma do vetor: %d\n", somaVetInt(vet, tamanho));
}  