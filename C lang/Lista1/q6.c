#include <stdio.h>
#include <stdlib.h>

void main(){
    int numA, numN, soma;

    printf("Digite um valor de início [A] e um valor N de números: ");
    scanf("%d %d", &numA, &numN);

    while (numN <= 0){
        printf("N não pode ser zero ou negativo. Digite novamente: ");
        scanf("%d",&numN);
    }

    soma = numA;
    for (int c = 1; c<numN ; c++){
        numA++;
        soma += numA;
    }

    printf("Soma: %d\n", soma);

}
