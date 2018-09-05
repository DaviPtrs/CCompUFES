#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("\nOs divisores de %d são: ", num);
    for(int c = num-1; c>0; c--){
        if (num % c == 0)
            printf("%d ", c);
        
    }
    puts(" ");

    
}