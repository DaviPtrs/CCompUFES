#include <stdio.h>
#include <stdlib.h>

struct Vetor{ 
float x;
float y;
float z;
}; 

typedef struct Vetor Vetor;

Vetor somaVetorR3(Vetor v1, Vetor v2){
    Vetor resultado;

    resultado.x = v1.x + v2.x;
    resultado.y = v1.y + v2.y;
    resultado.z = v1.z + v2.z;

    return resultado;
}


int main(){
    Vetor v1;
    Vetor v2;
    Vetor v3;
    
    printf("Vetor 1: ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    printf("Vetor 2: ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    v3 = somaVetorR3(v1, v2);

    printf("soma: %f %f %f\n", v3.x, v3.y, v3.z);

    return 0;
}