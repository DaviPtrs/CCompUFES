#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, flag = 0;

    for(int n = 1; flag!=1; n++){
        for(int c = 1; c<=20; c++){
            if (!(n % c == 0)){
                flag = 0;
                break;
            }else{
                num = n;
            }
            if (c==20)
                flag = 1;
        }
    }
    printf("%d\n", num);
    
}