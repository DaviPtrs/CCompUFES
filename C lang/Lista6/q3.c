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

    printf("Diagonal secundária: ");
    for(int i = 0; i<5; i++){
        printf("%d ", matriz[i][4-i]);
    }
    puts("");
}