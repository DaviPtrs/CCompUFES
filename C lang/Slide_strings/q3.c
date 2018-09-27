#include <stdio.h>
#include <stdlib.h>

void reversePrint(char *str, int c){
    for(int i = c; i>=0; i--){
        printf("%c", str[i]);
    }
    puts(" ");
}

void main(){
    char *palavra;
    printf("Digite uma palavra: ");
    palavra = gets();

    for(int i = 0; ;i++){
        if (palavra[i] == '\0'){
            reversePrint(palavra, i-1);
            break;
        }
    }
}
