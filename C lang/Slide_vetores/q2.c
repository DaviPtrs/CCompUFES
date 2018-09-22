#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[20];

    for(int i = 0; i<20; i++){
        printf("Digite um inteiro: ");
        scanf("%d", &numeros[i]);
    }
    
    printf("A ordem de digitação inversa é: ");
    for(int i = 19; i>=0; i--){
        printf("%d ", numeros[i]);
    }
    puts(" ");
}