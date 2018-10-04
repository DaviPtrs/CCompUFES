#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menorString(char str1[], char str2[]){
    if (strlen(str1) > strlen(str2))
        return strlen(str2);
    else
        return strlen(str1);    
}

void intercala(char string1[], char string2[]){
    int limite;
    limite = menorString(string1, string2);

    for (int i = 0; i<limite; i++){
        printf("%c", string1[i]);
        printf("%c", string2[i]);
    }
    
    if (strlen(string1) > limite){
        for (int i = limite; i<strlen(string1); i++){
            printf("%c", string1[i]);
        }
    }else if (strlen(string2) > limite){
        for (int i = limite; i<strlen(string2); i++){
            printf("%c", string2[i]);
        }
    }
}


void main(){
    char string1[50];
    char string2[50];
    

    printf("Digite duas palavras: ");
    scanf("%s %s", string1, string2);

    intercala(string1, string2);
    puts("");
}