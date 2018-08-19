#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    float dist;
    struct coord
    {
        int x;
        int y;
    };

    struct coord ponto1;
    struct coord ponto2;

    printf("Digite dois pares ordenados (x1,y1) (x2,y2): ");
    scanf("(%d,%d) (%d,%d)", &ponto1.x, &ponto1.y, &ponto2.x, &ponto2.y);

    dist = sqrt((pow((ponto2.x - ponto1.x), 2)) + (pow((ponto2.y - ponto1.y), 2)));

    printf("A distância entre os pares (%d,%d) e (%d,%d) vale %.2f\n", 
    ponto1.x, ponto1.y, ponto2.x, ponto2.y, dist);
}