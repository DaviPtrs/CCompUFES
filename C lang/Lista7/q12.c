#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N){
    int negativosQtd = 0;
    for(int i = 0; i<N; i++){
        if (vet[i] < 0)
            negativosQtd++;
    }

    return negativosQtd;
}


void main(){
    int negNums;
    float vetor[9] = {-5,15,-17,-18,7,-1,8,18,-1};

    negNums = negativos(vetor, 9);

    printf("%d\n", negNums);

}
