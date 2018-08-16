#include <stdio.h>
#include <stdlib.h>

void main(){
    int c = 0, num, maior;

    while(c<3){
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        if (c==0){
            maior = num;
        } else if (num > maior){
            maior = num;
        }
        c += 1;
    }
    printf("\nO maior número digitado foi %d\n", maior);
}