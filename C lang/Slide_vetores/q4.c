#include <stdio.h>
#include <stdlib.h>

void main(){
    int conj1[10];
    int conj2[10];
    
    printf("Conjunto 1:\n");
    for(int i = 0; i<10; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &conj1[i]);
    }

    printf("\nConjunto 2\n");
    for(int i = 0; i<10; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &conj2[i]);
    }

    printf("A intersecção dos dois conjuntos é: ");
    for(int i1 = 0; i1<10; i1++){
        for(int i2 = 0; i2<10; i2++){
            if (conj1[i1] == conj2[i2])
                printf("%d ", conj1[i1]);
        }
    }
    
    puts(" ");
}