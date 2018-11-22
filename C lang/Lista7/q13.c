#include <stdio.h>
#include <stdlib.h>

int somaArray(int *vet1, int size1, int *vet2, int size2, int **vetResultado){
    
    if(size1!=size2){
        printf("Os vetores precisam de ser tamanhos iguais!");
        return 0;
    }

    int *vet3;
    vet3 = (int *) malloc(size1 * sizeof(int));

    for(int i = 0; i < size1; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    *vetResultado = vet3;

    return 1;
}


void main(){
    int negNums;
    int vetor1[9] = {-5,15,-17,-18,7,-1,8,18,-1};
    int vetor2[9] = {2,5,-7,-1,71,1,3,8,-12};
    int *vetor3;

    if (!(somaArray(vetor1, 9, vetor2, 9, &vetor3))){
        exit(0);
    }

    for(int i = 0; i < 9; i++){
        printf("%d\n", vetor3[i]);
    }

    free(vetor3);

}
