#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[50];

    for(int i = 0, n = 101; i<50, n<=150; i++, n++){
        numeros[i] = n;
    }
    
    for(int i = 0; i<50; i++){
        printf("%d ", numeros[i]);
    }
    puts(" ");
}