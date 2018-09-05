#include <stdio.h>
#include <stdlib.h>

void main(){
    int limite;
    long double somaE = 0;

    printf("Digite um número para calcular E:  ");
    scanf("%d", &limite);

    for(int n = 1; n <= limite; n++){
        int N = n;

        for(int fat = (n-1); fat>0; fat--){
            N *= fat;
        }

        somaE += 1/(long double)N;
    }

    printf("A soma E até 1/%d! vale: %.6Lf\n", limite, somaE);
}