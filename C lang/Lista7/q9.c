#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14
void calc_esfera(float r, float *area, float *volume){
    *volume = ((float)4/3) * PI * pow(r, 3);
    *area = 4 * PI * pow(r, 2);
}

int main(){
    float raio;
    float area;
    float volume;

    printf("Raio da esfera> ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);
    
    printf("Volume: %.2f; Área %.2f\n", volume, area);
    return 0;
}
