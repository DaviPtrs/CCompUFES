#include <stdio.h>

void main(){
    int n, soma = 0;
    do{
        printf("Digite um inteiro maior que zero: ");
        scanf("%d",&n);
    } while (n <= 0);

    for(int i = 0; i<= n; i++){
        soma += i;
    }
    printf("A soma de todos os inteiros até %d vale %d\n",n,soma);

}

