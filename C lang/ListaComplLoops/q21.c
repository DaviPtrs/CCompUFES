#include <stdio.h>
#include <stdlib.h>

void main(){
    int sPares = 0, mImpares = 1, n1, n2;

    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);

    for(int n = n1; n<=n2; n++){
        if (n % 2 == 0){
            sPares += n;
    }

    for(int n = n1; n<=n2; n++){
        if (n % 2 != 0)
            mImpares *= n;
    }

    printf("Soma dos pares do intervalo: %d\n", sPares);
    printf("Multiplicação dos impares do intervalo: %d\n", mImpares);
    }
}