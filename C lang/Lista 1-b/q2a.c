#include <stdio.h>

void main(){
    double n1,n2,n3,media;

    printf("Digite 3 números inteiros: ");
    scanf("%lf %lf %lf",&n1,&n2,&n3);

    media = (n1 + n2 + n3)/3;

    printf("A média entre %.1lf, %.1lf e %.1lf vale %.2lf.\n", n1,n2,n3,media);
}
