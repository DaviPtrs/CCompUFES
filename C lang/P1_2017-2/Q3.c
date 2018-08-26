#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1=1,n2=1,n3,soma=0,lim,i=0;
    
    printf("Limite da soma > ");
    scanf("%d",&lim);

    while (1){
        n3 = n1+n2;
        soma += n3;
        
        if (soma > lim){
            soma -= n2;
            printf("%d ",n3);
            break;
        } else if (soma == lim){
            printf("%d %d ",n2,n3);
            break;
        } else {
            if (n1!=n2) printf("%d ",n2);
        }

        n1 = n2;
        n2 = n3;
        }
    printf("\nSoma dos termos: %d\n",soma);

}