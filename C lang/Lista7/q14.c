#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_hexagono(float L, float *area, float *perimetro){
    *area = (3 * pow(L, 2) * sqrt(3)) / 2;
    *perimetro = 6*L;
}

void main(){
    float area;
    float L;
    float perimetro;

    printf("Digite o lado do hexágono: ");
    scanf("%f", &L);

    calcula_hexagono(L, &area, &perimetro);

    printf("Área: %.2f\nPerímetro: %.2f\n", area, perimetro);

}
