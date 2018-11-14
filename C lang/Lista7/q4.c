#include <stdio.h>
#include <stdlib.h>

float Aumento(int x, int y){
    float aumento;
    aumento = (float)x+((x*y)/100);
    return aumento;
}

void main(){
    int n1, n2;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("%d aumentado em %d: %.2f\n", n1, n2, Aumento(n1,n2));
}

