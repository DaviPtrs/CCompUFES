#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){
    float soma1 = 0,soma2 = 0,soma3 = 0;

    for (float n = 1, d = 1; n<=99, d<=50; n+=2, d++){
        soma1 += (n/d);
    }
    printf("Soma1: %.2f\n", soma1);

    for (float n = 1, d = 50; n<=50, d>=1; n++, d--){
        soma2 += (pow(2, n)) / d;
    }
    printf("Soma2: %.2f\n", soma2);

    for (float n = 1, d = 1, add = 1; n <= 10, d<=100; n++, add += 2, d += add){
        if ((int)n % 2 != 0)
            soma3 += (n/d);
        else
            soma3 -= (n/d);
        
    }
    printf("Soma3: %.2f\n", soma3);
    
}