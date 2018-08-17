#include <stdio.h>
#include <stdlib.h>

void main() {
    int anos,meses,dias;

    printf("Digite um valor em dias: >");
    scanf("%d",&dias);
    printf("%d dias > ", dias);

    meses = dias / 30;
    anos = meses / 12;
    meses -= 12*anos;
    dias = dias - (30*meses) - (360*anos);

    printf("%d:%d:%d\n", anos, meses, dias);
}