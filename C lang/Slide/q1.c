#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

void main(){
    float raio, area;
    printf("Digite o valor do raio: ");
    scanf("%f",&raio);
    area = (pow(raio, 2)) * PI;
    printf("\nA área do círculo de raio %.2f mede %.2f \n", raio, area);
}