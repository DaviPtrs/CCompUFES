#include <stdio.h>
#include <stdlib.h>

float jordana();

void main(){
    int n1,n2,n3;
    printf("Digite três números para tirar a média: ");
    scanf("%d %d %d", &n1, &n2, &n3);


    float media = jordana(n1,n2,n3);
    printf("O media vale: %.2f.\n", media);
}


float jordana(int x, int y, int z){
    float media;
    media = ((float)(x+y+z))/3;
    return media;
}