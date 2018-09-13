#include <stdio.h>
#include <stdlib.h>

float jordana(float x, float y, float z);

void main(){
    float n1,n2,n3;
    printf("Digite três números para tirar a média: ");
    scanf("%f %f %f", &n1, &n2, &n3);


    float media = jordana(n1,n2,n3);
    printf("O media vale: %.2f.\n", media);
}


float jordana(float x, float y, float z){
    float media;
    media = (x+y+z)/3;
    return media;
}