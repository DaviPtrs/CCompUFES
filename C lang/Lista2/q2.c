#include <stdio.h>
#include <stdlib.h>

void main(){
    char c1, c2;
    int dif;
    printf("Digite 2 caracteres de A a Z: ");
    scanf("%c %c", &c1, &c2);
    dif = c2 - c1 - 1;
    printf("Entre %c e %c existem %d letras!\n", c1, c2, dif);
}