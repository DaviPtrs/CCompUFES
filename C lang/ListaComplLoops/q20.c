#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, c = 0, pares = 0;

    while (1){
        printf("Digite um número (1000 para parar): ");
        scanf("%d", &n);

        if (n == 1000) 
            break;
        c++;

        if (n % 2 == 0){
            pares++;
        }
    }
    printf("\nForam lidos %d valores sendo %d valores pares!\n", c, pares);
}