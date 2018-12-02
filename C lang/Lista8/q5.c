
#include <stdio.h>
#include <stdlib.h>

void freeMatriz(int **matriz, int n){
    for(int i = 0; i<n ; i++){
        free(matriz[i]);
    }
    free(matriz);
}


void preencheMatriz(int **matriz, int n ,int m){
    int num;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("Linha %d Coluna %d: ", i+1, j+1);
            scanf("%d", &num);
            matriz[i][j] = num;
        }
    }
}

void somaMatriz(int **matriz1, int **matriz2, int **matrizRes, int n ,int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            matrizRes[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void printaMatriz(int **matriz, int n ,int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("%d ", matriz[i][j]);
        }
        puts("");
    }
}

void main(){
    int n, m;
    int **matriz1;
    int **matriz2;
    int **matrizRes;

    printf("Digite a dimensão das matrizes: ");
    scanf("%d %d", &n, &m);

    matriz1 = (int **) malloc(n * sizeof(int *));

    for(int i = 0; i<n; i++){
        matriz1[i] = (int *) malloc(m * sizeof(int));
    }

    matriz2 = (int **) malloc(n * sizeof(int *));

    for(int i = 0; i<n; i++){
        matriz2[i] = (int *) malloc(m * sizeof(int));
    }

    matrizRes = (int **) malloc(n * sizeof(int *));

    for(int i = 0; i<n; i++){
        matrizRes[i] = (int *) malloc(m * sizeof(int));
    }

    printf("Matriz 1\n");
    preencheMatriz(matriz1, n , m);

    printf("Matriz 2\n");
    preencheMatriz(matriz2, n , m);

    somaMatriz(matriz1, matriz2, matrizRes, n, m);

    puts("");
    printaMatriz(matrizRes, n, m);

    freeMatriz(matriz1, n);
    freeMatriz(matriz2, n);
    freeMatriz(matrizRes, n);

}