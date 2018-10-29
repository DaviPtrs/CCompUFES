#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printaMesa(char mesa[3][3]){
        for(int i = 0; i<3; i++){
            printf("[");
            for(int j = 0; j<3; j++){
                printf(" %c ", mesa[i][j]);
            }
            printf("]\n");
        }
}

int checaMesa(char mesa[3][3]){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if (mesa[i][j] == '-'){
                return 0;
            }
        }
    }
    return 1;
}

void main(){
    char mesa[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            mesa[i][j] = '-';
        }
    }

    printf("Dê uma posição (coluna linha)\n");
    while (1){
        int i, j;

        while (1){
            printf("Jogador 1 [X]: ");
            scanf("%d %d", &i, &j);
            if (mesa[i-1][j-1] == '-'){
                mesa[i-1][j-1] = 'X';
                break;
            }
            printf("Essa posição já está preenchida. Tente novamente\n");
        }

        printaMesa(mesa);

        if (checaMesa(mesa)){
            printf("Não há mais lugares possíveis para jogar. Partida Terminada!\n");
            break;
        }

        while (1){
            printf("Jogador 2 [O]: ");
            scanf("%d %d", &i, &j);
            if (mesa[i-1][j-1] == '-'){
                mesa[i-1][j-1] = 'O';
                break;
            }
            printf("Essa posição já está preenchida. Tente novamente\n");
        }
        printaMesa(mesa);
        
        if (checaMesa(mesa)){
            printf("Não há mais lugares possíveis para jogar. Partida Terminada!\n");
            break;
        }
    }
}

