#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVogal(char letra, int n){
    if ((letra == 'a') || (letra == 'e') || (letra == 'i') 
        || (letra == 'o') || (letra == 'u')){
            return 1;
    }else{
        return 0;
    }
}

int limiteStr(char str[]){
    for(int i = 0; ;i++){
        if (str[i] == '\0')
            return i;
    }
}

int contVogal(char str[]){
    int cont = 0;
    for(int n = 0; n<limiteStr(str); n++){
        if (isVogal(str[n], n))
            cont ++;
        
    }
    return cont;
}

void substVogal(char str[], char letra){
    for (int i = 0; i<limiteStr(str); i++){
        if (isVogal(str[i], i))
            printf("%c", letra);
        else
            printf("%c", str[i]);
    }
}

void main(){
    char palavra[50];
    char letra;

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    palavra [strcspn(palavra, "\n")] = '\0';

    int vogais = contVogal(palavra);
    printf("A palavra %s possui %d vogais\n", palavra, vogais);

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &letra);

    printf("Substituindo as vogais de \"%s\" por \"%c\": ", palavra, letra);
    substVogal(palavra, letra);
    puts("");

}