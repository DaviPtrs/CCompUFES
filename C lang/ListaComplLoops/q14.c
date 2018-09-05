#include <stdio.h>
#include <stdlib.h>

void main(){
    int n;

    printf("Digite um N qualquer: ");
    scanf("%d", &n);

    for(int c = n; c>0; c--){
        if (c % 2 != 0)
            printf("%d\n", c);
    }
}