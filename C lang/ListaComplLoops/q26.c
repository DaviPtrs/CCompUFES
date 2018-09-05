#include <stdio.h>
#include <stdlib.h>

void main(){
    int limite;
    
    printf("Digite um número qualquer: ");
    scanf("%d", &limite);

    for(int num = limite; num>0; num++){
        if ((num % 11 == 0) || (num % 13 == 0) || (num % 17 == 0)){
            printf("O primeiro múltiplo de 11,13, ou 17 após %d é %d\n",limite, num);
            break;
        }
    }
}