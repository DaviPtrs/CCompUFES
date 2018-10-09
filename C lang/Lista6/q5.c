#include <stdio.h>
#include <stdlib.h>

void main(){
    int matrizA[5][5];
    int matrizB[5][5];
    int matrizC[5][5];

    printf("Matriz A\n");
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            printf("Posição %d.%d: ", i,j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Matriz B\n");
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            printf("Posição %d.%d: ", i,j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            matrizC[j][i] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for(int i = 0; i<5; i++){
        printf("[");
        for(int j = 0; j<5; j++){
            printf(" %d ", matrizC[i][j]);
        }
        printf("]\n");
    }
}