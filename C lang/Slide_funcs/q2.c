#include <stdio.h>
#include <stdlib.h>

int produto();

void main(){
    int n1,n2,res;
    printf("Digite dois números para multiplicar: ");
    scanf("%d %d", &n1, &n2);

    res = produto(n1,n2);
    printf("O produto de %d por %d é %d.\n", n1, n2, res);
}

int produto(int x, int y){
    return x*y;
}