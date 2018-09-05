#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("\nOs divisores de %d são: ", num);
    for(int c = num-1; c>0; c--){
        if (num % c == 0){
            soma += c;
            printf("%d ", c);
        }
    }
    printf("\nA soma dos divisores é a igual a %d.\n", soma);

    
}