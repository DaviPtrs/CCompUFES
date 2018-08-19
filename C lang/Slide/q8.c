#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    float a,b,c,delta,x1,x2;

    printf("Digite 3 números em ponto flutuante: ");
    scanf("%f %f %f",&a,&b,&c);

    delta = pow(b,2) - 4 * a * c;
    if (delta < 0){
        printf("Não existem raízes reais!\n");
    } else if (delta == 0){
        x1 = (-b) / (2*a);
        printf("A única raiz vale %.2f", x1);
    } else {
        x1 = ((-b) + sqrt(delta)) / (2*a);
        x2 = ((-b) - sqrt(delta)) / (2*a);  
        printf("As raízes valem %f e %f\n", x1,x2);
    } 
}