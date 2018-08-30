#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;

    while (1){
        printf("Digite um número qualquer.[1] para sair: ");
        scanf("%d", &num);

        if (num==1) break;

        if (!(num % 2 == 0) && !(num % 3 == 0) && !(num % 5 == 0) && !(num % 7 == 0))
            puts("0");
        
        if ((num % 2 == 0) || (num % 3 == 0))
            puts("1");

        if ((num % 5 == 0) && (num % 7 == 0))
            puts("2");
    }
}