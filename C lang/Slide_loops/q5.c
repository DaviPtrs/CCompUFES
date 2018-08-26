#include <stdio.h>

void main(){
    int n1,n2;
    
    printf("Digite dois números inteiros: ");
    scanf("%d %d",&n1,&n2);

    if (n1<n2)
        printf("Crescente\n");
    else if (n1>n2)
            printf("Decrescente\n");
}



