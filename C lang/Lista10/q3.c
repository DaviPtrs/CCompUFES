#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro{
    char titulo[31];
    char autor[16];
    int ano;
};

typedef struct Livro Livro;

int subString(char str1[], char str2[]){
    int Tstr2, Tstr1;
    Tstr2 = strlen(str2);
    Tstr1 = strlen(str1);

    for(int i = 0; i<Tstr2; i++){
        for(int n = 0, iIni; n<Tstr1; n++){
            if (n == 0)
                iIni = i;            
            if (str2[i] == str1[n]){
                if(n == (Tstr1-1))
                    return 1;
                i++;
            }else{
                i = iIni;
                break;        
            }
        }
    }
    return 0;

}


int main(){
    Livro livros[2];

    for(int i = 0; i<2; i++){
        printf("Livro %d\n", i+1);
        printf("Título: ");
        getchar();
        fgets(livros[i].titulo, 31, stdin);
        strtok(livros[i].titulo, "\n");

        printf("Autor: ");
        getchar();
        fgets(livros[i].autor, 31, stdin);
        strtok(livros[i].autor, "\n");

        printf("Ano: ");
        scanf("%d", &livros[i].ano);

    }

    while(1){
        char pesquisa[31];
        Livro resultado;

        printf("Pesquisar por nome: ");
        getchar();
        fgets(pesquisa, 31, stdin);

        int flag = 0;
        for(int i = 0; i<2; i++){
            if(strcmp(livros[i].titulo, pesquisa)){
                resultado = livros[i];
                flag = 1;
            }
        }

        if(flag == 0){
            printf("Livro não encontrado!\n");
        }else{
            printf("\nLIVRO ENCONTRADO\n");
            printf("Título: %s\n", resultado.titulo);
            printf("Autor: %s\n", resultado.autor);
            printf("Ano: %d\n", resultado.ano);
        }

        
        
    }

    return 0;
}
