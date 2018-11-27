
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
    int nomesQtd;
    char **nomes;

    printf("Informe o número de nomes: ");
    scanf("%d", &nomesQtd);

    nomes = (char **) malloc(nomesQtd * sizeof(char *));

    for(int i = 0; i<nomesQtd; i++){
        nomes[i] = (char *) malloc(31 * sizeof(char));
    }

    while (1){
        int sair = 0;
        char opc;

        puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        puts("-=-=-=-=-=-=-=-=ESCOLHA UMA OPÇÃO-=-=-=-=-=-=-=-=-=");
        puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");


        puts("(a) Gravar um nome em uma linha");
        puts("(b) Apagar um nome contido em uma linha");
        puts("(c) Substituir um nome");
        puts("(d) Apagar um nome");
        puts("(e) Recuperar um nome contido em uma linha");
        puts("(f) Sair");

        while(1){
            printf(">> ");
            scanf(" %c", &opc);
            if ((opc >= 'a') && (opc <= 'f')){
                break;
            }else{
                printf("OPÇÃO INVÁLIDA, TENTE NOVAMENTE!\n");
            }
        }
        if(opc == 'f'){
            sair = 1;
        }

        if(sair == 1){
            break;
        }

        // switch(opc)
    }

}