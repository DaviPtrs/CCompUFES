#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int procuraNome(char **lista, int sz, char *nome){
    int linha = -1;
    char *str;

    for(int i = 0; i < sz; i++){
        str = lista[i];
        if(strcmp(nome, str) == 0)
            linha = i;
    }
    free(str);

    return linha;
}


void main(){
    int nomesQtd;
    char **nomes;

    printf("Informe o número de nomes: ");
    scanf("%d", &nomesQtd);

    nomes = (char **) malloc(nomesQtd * sizeof(char *));

    for(int i = 0; i<nomesQtd; i++){
        nomes[i] = (char *) malloc(30 * sizeof(char));
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
        int linha;
        char nome[30];
        switch (opc){
            case 'a':
                printf("Informe a linha: ");
                scanf("%d", &linha);
                linha--;

                printf("Nome: ");
                getchar();            

                fgets(nomes[linha], 30, stdin);
                strtok(nomes[linha], "\n");

                printf("Nome gravado com sucesso!\n");
                break;

            case 'b':
                printf("Informe a linha: ");
                scanf("%d", &linha);
                linha--;

                nomes[linha] = "";
                printf("Nome apagado!\n");
                break;

            case 'c':
                printf("Informe um nome: ");
                getchar();
                fgets(nome, 30, stdin);
                strtok(nome, "\n");

                linha = procuraNome(nomes, nomesQtd, nome);
                if(linha == -1){
                    printf("Esse nome não existe na lista!\n");
                    break;
                }

                printf("Novo nome: ");
                getchar();            

                fgets(nomes[linha], 30, stdin);
                strtok(nomes[linha], "\n");

                printf("Nome substituido com sucesso!\n");
                break;

            case 'd':
                printf("Informe um nome: ");
                getchar();
                fgets(nome, 30, stdin);
                strtok(nome, "\n");

                linha = procuraNome(nomes, nomesQtd, nome);
                if(linha == -1){
                    printf("Esse nome não existe na lista!\n");
                    break;
                }
                nomes[linha] = "";
                printf("Nome apagado!\n");
                
                break;
            case 'e':
                printf("Informe a linha: ");
                scanf("%d", &linha);
                linha--;

                printf("Nome: %s\n", nomes[linha]);
                break;
            case 'f':
                sair = 1;        
        }

        if(sair == 1){
            break;
        }

    puts("\n");
        
    }

    free(nomes);

}