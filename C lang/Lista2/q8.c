#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int ab,cd,ef, num2;
    for (int num = 1000; num <= 9999; num++){
        ab = num / 100;
        cd = num - (ab * 100);
        ef = ab + cd;
        num2 = pow(ef, 2);
        if (num2 == num){
            printf("%d\n", num);
        }
    } 
    
}