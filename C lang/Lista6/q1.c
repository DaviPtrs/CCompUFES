#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz[5][5];

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            printf("Posição %d.%d: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i<5; i++){
        printf("[");
        for(int j = 0; j<5; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("]\n");
    }
}