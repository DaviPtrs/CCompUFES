#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro{
    char titulo[31];
    char autor[16];
    int ano;
};

typedef struct Livro Livro;

int subString(char *s1, char *s2){
    int t1 = strlen(s1);
    int t2 = strlen(s2);

    int flag = 0;

    if(t1 > t2) return 0;

    for(int i = 0; i<s2; i++){
        for(int c = 0; i<s1; c++){//PAREI AQUI
            
        }
    }
}

int main(){
    Livro livros[5];

    for(int i = 0; i<5; i++){
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
        scanf("%d", livros[i].ano);
    }



    return 0;
}