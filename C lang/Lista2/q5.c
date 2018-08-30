#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1,n2,n3;
    printf("Digite 2 números para calcular o MDC: ");
    scanf("%d %d", &n1, &n2);

    int n1old = n1;
    int n2old = n2;

    while (1){
        if (n1 < n2){
            n3 = n1;
            n1 = n2;
            n2 = n3;
        }
        if (n2 == 0){
            printf("O MDC entre %d e %d vale %d.\n", n1old, n2old, n1);
            break;
        } else {
            n1 -= n2;
        }
        
    }
}