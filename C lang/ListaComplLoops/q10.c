#include <stdio.h>
#include <stdlib.h>

void main(){
    int soma = 0;

    for(int num = 0, c = 0; c<50; num++){
        if (num % 2 ==0){
            soma += num;
            c++;
            printf("%d %d\n", num, c);
        }
    }

    printf("O resultado da soma é %d\n", soma);
}