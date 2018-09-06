#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int soma1 = 0, soma2 = 0, dif;

    for (int n = 1; n<=100; n++){
        soma1 += pow (n, 2);
        soma2 += n;
    }
    soma2 = pow(soma2, 2);

    dif = (soma2 - soma1);

    printf("A diferença é: %d\n", dif);
}