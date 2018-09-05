#include <stdio.h>
#include <stdlib.h>

void main(){
    int limite;
    float soma = 0;
    
    printf("Digite n para calcular a série harmônica: ");
    scanf("%d", &limite);

    for(float d = 1; d<=limite; d++){
        soma += (1/d);
    }
    printf("A soma da série vale: %f\n", soma);
}