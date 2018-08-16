#include <stdio.h>
#include <stdlib.h>

void main(){
    int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    printf("Digite um valor em R$ ");
    scanf("%d", &valor);

    nota100 = valor / 100;
    if (nota100 != 0){
        printf("%d notas de R$ 100\n", nota100);
    }

    nota50 = (valor / 50) - nota100*2;
    if (nota50 != 0){
        printf("%d notas de R$ 50\n", nota50);
    }

    nota20 = (valor % 50) / 20;
        if (nota20 != 0){
        printf("%d notas de R$ 20\n", nota20);
    }

    nota10 = ((valor % 50) / 10) - nota20*2;
    if (nota10 != 0){
        printf("%d notas de R$ 10\n", nota10);
    }

    nota5 = ((valor % 100) % 10) / 5;
    if (nota5 != 0){
    printf("%d notas de R$ 5\n", nota5);
    }

    nota2 = ((valor % 100) % 5) / 2;
    if (nota2 != 0){
        printf("%d notas de R$ 2\n", nota2);
    }
        
    nota1 = ((valor % 100) % 5) % 2;
    if (nota1 != 0){
        printf("%d notas de R$ 1\n", nota1);
    }
    
    }