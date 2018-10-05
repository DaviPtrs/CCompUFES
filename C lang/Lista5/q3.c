#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){ //  'Z' = 90 // 'A' 65 // (('A'-2)+26)
    int key;
    char hash[64];
    char plain[64];

    printf("Digite o numero chave: ");
    scanf("%d", &key);
    printf("Digite a cifra (letras maísculas) > ");
    scanf(" %s", hash);

    for(int i = 0; i<(strlen(hash)); i++){
        if (((int)(hash[i] - key)) < 65)
            plain[i] = (char)((hash[i] - key) + 26);
        else
            plain[i] = (char)((hash[i] - key));        
    }
    plain[(strlen(hash))] = '\0';

    printf("Plain Text: ");
    for(int i = 0; i<(strlen(plain)); i++){
        printf("%c", plain[i]);
    }
    puts("");

}
