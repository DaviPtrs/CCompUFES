#include <stdio.h>

void main(){
    int a,b;
    printf("Digite um intervalo de números inteiros ");
    printf("\nEX: [a,b] >> ");
    scanf("[%d,%d]",&a,&b);
    
    printf("Os números pares do intervalo [%d,%d] são: ",a,b);
    for (int i = a; i<=b; i++){
        if ((i % 2) == 0) printf("%d ",i);
    }
    printf("\n");
}



