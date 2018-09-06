#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1 = 0, n2 = 1, n3, limite;

    printf("Digite um número qualquer positivo: ");
    scanf("%d", &limite);

    printf("0 1 ");
    for(int c = 0; n2<=limite; c++){
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
    puts(" ");
}