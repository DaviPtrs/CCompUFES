#include <stdio.h>    
#include <stdlib.h>  

void main(){  
    int bin[64], n, i, tamanho;

    printf("Digite um número N inteiro: ");
    scanf("%d", &n);
    
    printf("O número %d em binário é: ", n);
    for(i = 0; n>0; i++){
        bin[i] = n % 2;
        n = n/2;
    }
    tamanho = i;
    
    for(i=i-1; i>=0; i--){
        printf("%d", bin[i]);
    }
    printf("\nTamanho: %d bits.\n", tamanho);
}  