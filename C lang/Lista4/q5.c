#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrim(int num){
    int cDiv = 0;
    for(int i = 1; i<=num; i++){
        if(num % i == 0)
            cDiv++;        
    }
    if (cDiv == 2) return 1; else return 0;
}

void main(){
    int numeros[50];
    int cPrim = 0;

    printf("Digite 50 numeros inteiros: ");
    for(int i = 0; i<50; i++){
        scanf("%d", &numeros[i]);
        
    }
    for(int i = 0; i<50; i++){
        if (isPrim(numeros[i]))
            cPrim ++;
    }
    printf("Foram encontrados %d números primos.\n", cPrim);
}