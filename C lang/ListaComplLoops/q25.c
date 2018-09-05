#include <stdio.h>
#include <stdlib.h>

void main(){
    int soma = 0;

    for (int n = 1; n < 1000; n++){
        if ((n % 3 == 0) || (n % 5 == 0))
            soma += n;
    }
    printf("A soma dos naturais, abaixo de 1000, múltiplos de 3 ou 5, vale: %d\n", soma);
}