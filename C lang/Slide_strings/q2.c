#include <stdio.h>
#include <stdlib.h>



void main(){
    char *nome;
    printf("Digite um nome: ");
    nome = gets();
    if (nome[0] == 'a' || nome[0] == 'A')
        printf("%s\n", nome);
}
