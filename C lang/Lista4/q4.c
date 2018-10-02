#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVogal(char letra){
    if ((letra == 'a') || (letra == 'e') || (letra == 'i') 
        || (letra == 'o') || (letra == 'u')){
            return 1;
    }else{
        return 0;
    }
}

void main(){
    char str[20];
    printf("Digite uma string de no max 20 caracteres: ");
    fgets(str,20,stdin);
    str [strcspn(str, "\n")] = '\0';

    puts("");
    for(int i = 0; i<strlen(str); i++){
        if (!isVogal(str[i])){
            printf("%c", str[i]);
        }
    }
    puts("");

}