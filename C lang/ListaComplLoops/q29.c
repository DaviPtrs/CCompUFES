#include <stdio.h>
#include <stdlib.h>

void main(){
    long double somaE = 0;


    for(int d = 0, n = 0; n <5; d+=2, n++){
        
        int N;
        if (d == 0){
            N = 1;
        }else{
            N = d;
        }

        for(int fat = (d-1); fat>0; fat--){
            N *= fat;
        }
        somaE += n/(long double)N;
    }

    printf("A soma E até 4/8! vale: %.6Lf\n", somaE);
}