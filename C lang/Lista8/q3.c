
#include <stdio.h>
#include <stdlib.h>

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
    int **matriz;

    printf("Digite a dimensão da matriz: ");
    scanf("%d %d", &n, &m);

    matriz = (int **) malloc(n * sizeof(int *));

    for(int i = 0; i<n; i++){
        matriz[i] = (int *) malloc(m * sizeof(int));
    }

    preencheMatriz(matriz, n , m);
    puts("");
    printaMatriz(matriz, n, m);

}