#include <stdio.h>
#include <stdlib.h>

float mediaPond(int n1, int n2, float n3, float n4, 
                float p1, float p2, float p3, float p4){
    float pesos = p1+p2+p3+p4;
    float soma = (n1*p1)+(n2*p2)+(n3*p3)+(n4*p4);
    float media = soma/pesos;
    return media;
}

void main(){
    int n1,n2;
    float n3,n4, p1,p2,p3,p4, media;

    printf("Digite dois inteiros e seus pesos: ");
    scanf("%d %d %f %f", &n1, &n2, &p1, &p2);

    printf("Digite dois reais e seus pesos: ");
    scanf("%f %f %f %f", &n3, &n4, &p3, &p4);

    media = mediaPond(n1,n2,n3,n4,p1,p2,p3,p4);

    printf("A média ponderada vale %.2f!\n", media);
}


