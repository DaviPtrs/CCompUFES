#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 =1 ,n2 = 1, n3, N, soma;

    printf("Digite N para ver a soma dos N números de fibonacci: ");
    scanf("%d", &N);

    if (N == 0) return 0;
    for (int i = 0; i < N; i++){
        if (i == 0) soma = n1;
        soma += n2;
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
    }
    printf("A soma dos %d primeiros termos vale: %d \n", N, soma);
    return 0;
}