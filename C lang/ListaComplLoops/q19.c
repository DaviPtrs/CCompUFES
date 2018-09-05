#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, a, b, c;

    printf("Digite um número entre 100 e 999: ");
    scanf("%d", &num);

    a = num / 100;
    b = (num - (a*100)) / 10;
    c = num - ((a*100) + (b*10));

    printf("CENTENA: %d\n", a);
    printf("DEZENA:  %d\n", b);
    printf("UNIDADE: %d\n", c);
}