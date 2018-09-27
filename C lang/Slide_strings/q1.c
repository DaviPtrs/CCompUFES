#include <stdio.h>
#include <stdlib.h>

int calcChar(char *palavra){
    int cont = 0;
    for(int i = 0; ;i++){
        if (palavra[i] == '\0'){
            break;
        }else if (!(palavra[i] == ' ')){
            cont ++;
        }
    }
    return cont;
}

void main(){
    char nome[50];
    printf("Digite um nome: ");
    gets(nome);
    printf("%d\n", calcChar(nome));
}
