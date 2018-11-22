#include <stdio.h>
#include <stdlib.h>

void ocorrenciaMaior(int size, int array[size], int *maiorNum, int *pertMaior){
    int maior;
    int ocorr = 1;

    for(int i = 0; i<size; i++){
        if (i==0)
            maior = array[i];
        else{
            if(array[i] == maior)
                ocorr++;
            else if(array[i] > maior){
                maior = array[i];
                ocorr = 1;
            }
        }
    }

    *maiorNum = maior;
    *pertMaior = ocorr;
}

void main(){
    int maiorNum;
    int pertMaior;
    int vetor[9] = {5,15,17,18,7,1,8,18,2};

    ocorrenciaMaior(9, vetor, &maiorNum, &pertMaior);

    printf("%d %d\n", maiorNum, pertMaior);

}
