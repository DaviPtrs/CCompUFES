#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int subString(char str1[], char str2[]){
    int Tstr1, Tstr2;
    Tstr1 = strlen(str1);
    Tstr2 = strlen(str2);

    for(int i = 0; i<Tstr1; i++){
        for(int n = 0, iIni; n<Tstr2; n++){
            if (n == 0)
                iIni = i;            
            if (str1[i] == str2[n]){
                if(n == (Tstr2-1))
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

void main(){
    char str1[50];
    char str2[50];

    printf("Digite uma string: ");
    scanf("%s", str1);
    printf("Digite outra string: ");
    scanf("%s", str2);

    if (subString(str1, str2))
        printf("Verdadeiro\n");
    else
        printf("Falso\n");
}