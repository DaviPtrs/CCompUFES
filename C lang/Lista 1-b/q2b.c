#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846264338327950288

void main(){
    double ang;
    printf("Digite um ângulo em graus: ");
    scanf("%lf",&ang);
    printf("Você digitou %.2lfº!\n",ang);

    ang = ang * (PI) / 180;

    printf("Seno: %.2lf\nCosseno: %.2lf\nTangente: %.2lf\n",sin(ang),cos(ang),tan(ang));
    
}
