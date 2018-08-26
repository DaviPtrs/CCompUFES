#include <stdio.h>

void main(){
    int n;
    printf("Digite um número para ver a tabuada>> ");
    scanf("%d",&n);

    for(int c = 1; c<=10; c++){
        printf("%2d X %d =\t%d\n",c,n,(c*n));
    }
}



