#include <stdio.h>
#include <stdlib.h>

void main(){
    int vet[50];

    for (int i = 0; i<50; i++){        
        vet[i] = ((i + 5 * i) % (i + 1));
    }
    printf("Vetor resultante: ");
    for (int i = 0; i<50; i++){        
        printf("%d ", vet[i]);
    }   
    puts("");
}