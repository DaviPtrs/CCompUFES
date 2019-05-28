#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

celulaPilha *criaCelula(int n){
    celulaPilha *tronco = malloc(sizeof(celulaPilha));
    tronco->num = n;
    tronco->prox = NULL;

    return tronco;
}

tPilha *criaPilha(){
    tPilha *duracel = malloc(sizeof(tPilha));
    duracel->Base = duracel->Topo = NULL;

    return duracel;
}

int pilhaVazia(tPilha *moura){
    return(moura->Base == NULL);
}

void liberaPilha(tPilha *litio){
    while(litio->Topo != NULL){
        celulaPilha *aux = litio->Base;
        litio->Base = litio->Base->prox;
        free(aux);
    }
    free(litio);
}

char *readSentence(){
    char *sentence = malloc(50 *sizeof(char));
    fgets(sentence, 50, stdin);

    return sentence;
}

int convertCharToNum(char c){
    return(((int) c) - 48);
}

int isOp(char c){
    return((c == '-') || (c == '+') || (c == '*') || (c == '/'));
}

void func(char *sentence, int tam){
    int flag = 0;
    int sinal = 0;
    int ini = 0;
    int num = 0;
    for(int i = ini; i<tam; i++){
        if(!isdigit(sentence[i]) && isOp(sentence[i])){
            if((i == ini) && isdigit(sentence[i+1]) && (sentence[i] == '-'))
                sinal = 1;
            else
                printf("Operação %c\n", sentence[i]);
                num = 0;           
        }else if(isdigit(sentence[i])){
            num *= 10;
            num += convertCharToNum(sentence[i]);
        }else if((sentence[i] == '\n') || (sentence[i] == '\0')){
            printf("Parou\n");
            break;
        }
        else{
            if(sinal == 1) num = -num;
            printf("Número %d\n", num);
            ini = i + 1;
            num = 0;
        }
    }
}

// int trataSentence(char *sentence, int tam, int *flag, int *ini){
//     int num = 0;
//     *flag = 0;
//     for(int i = *ini; i<tam; i++){
//         if(isdigit(sentence[i])){
//             num *= 10;
//             num += convertCharToNum(sentence[i]);
//         }else{
//             switch(sentence[i]){
//                 case '-':
//                     if((i == *ini) && isdigit(sentence[i+1])){
//                         num = -num;
//                     }else{
//                         *flag = 1;
//                         return (int)sentence[i];
//                     }
//                     break;
//                 case '+':
//                     if(!isdigit(sentence[i+1])){
//                         *flag = 1;
//                         return (int)sentence[i];
//                     }                    
//                     break;
//                 case '*':
//                     if(!isdigit(sentence[i+1])){
//                         *flag = 1;
//                         return (int)sentence[i];
//                     }else{
//                         *flag = 3;
//                     }     
//                     break;
//                 case '/':
//                     if(!isdigit(sentence[i+1])){
//                         *flag = 1;
//                         return (int)sentence[i];
//                     }else{
//                         *flag = 4;
//                     }     
//                     break;
//                 case ' ':
//                     *flag = 2;
//                     *ini = i+1;
//                     break;
//                 case '\n':
//                     *flag = 3;
//                     break;
//                 case '\0':
//                     *flag = 3;
//                     break;
//                 default:
//                     *flag = 4;
//                     break;
//             }        
//         }
//     }

//     return num; // flag = 0 - num, flag = 1 - op, flag = 2 - espaço, flag = 3 - parada, flag = 4 - sinal inválido
// }

int main(){
    int flag, ini = 0;

    char *frase = readSentence();

    func(frase, 50);

    // while (1){
    //     int num = trataSentence(frase, 50, &flag, &ini);
    //     if(flag != 3){
    //         switch(flag){
    //             case 0:
    //                 printf("Número %d\n", num);
    //                 break;
    //             case 1:
    //                 printf("Operação %c\n", num);
    //                 break;
    //             case 4:
    //                 printf("Sinal inválido! Finalizando...\n");
    //                 exit(1);
    //                 break;
    //         }
    //     }else{
    //         printf("Parou\n");
    //         break;
    //     }
    // }
    

    return 0;
}


