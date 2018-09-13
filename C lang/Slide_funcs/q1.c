#include <stdio.h>
#include <stdlib.h>

int antecessor();

void main(){
    int num;
    printf("Digite um número para ver seu antecessor: ");
    scanf("%d", &num);
    printf("O antecessor de %d é ", num);
    num = antecessor(num);
    printf("%d.\n", num);
}

int antecessor(int x){
    return x-1;
}