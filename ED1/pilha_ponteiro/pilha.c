#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXTAM 50

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

int convertCharToNum(char c){
    return(((int) c) - 48);
}

int isOp(char c){
    return((c == '-') || (c == '+') || (c == '*') || (c == '/'));
}

int calcIni(char *input, int tam){
    //flag// 0 - numero; 1 - operação; 2 - syntax error
    int flag, sinal, operou, ini, num, contNums, contOp;
    flag = sinal = operou = ini = num = contNums = contOp = 0;

    for(int i = ini; i<tam; i++){
        if(!isdigit(input[i]) && isOp(input[i])){
            if((i == ini) && isdigit(input[i+1])){
                if(input[i] == '-')
                    sinal = 1;
                else if(input[i] == '+')
                    sinal = 0;
                else{
                    flag = 2;
                    break;
                }
            }
            else{
                flag = 1;
                operou = 1;
                contOp++;
                printf("Operação %c\n", input[i]);
            }
        }else if(isdigit(input[i])){
            num *= 10;
            num += convertCharToNum(input[i]);
        }else if((input[i] == '\n') || (input[i] == '\0')){
            printf("Parou\n");
            break;
        }
        else{
            if(flag == 0){
                contNums++;
                if(sinal == 1){
                    sinal = 0;
                    num = -num;
                }
                printf("Número %d\n", num);
                num = 0;
                flag = 0;
            }
            ini = i + 1;
        }
    }
    free(input);

    if(!operou || (contNums != (contOp + 1))) flag = 2; 
    return flag;
}

void printPilha(tPilha *litio){
    celulaPilha *aux = litio->Base;
    for(int i = 0; aux!=NULL; i++){

    }
}

void printResultado(tPilha *calculos){
    printf("=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Resultado = %d\n", calculos->Base->num);
    printf("=-=-=-=-=-=-=-=-=-=-=\n");

}


int main(){

    char *input = malloc(MAXTAM *sizeof(char));
    fgets(input, MAXTAM, stdin);

    tPilha *calculos = criaPilha();
    

    if(calcIni(input, MAXTAM) == 2){
        printf("=-=-SYNTAX ERROR-=-=\n");
    }else{
        // printResultado(calculos);
    }

    liberaPilha(calculos);

    return 0;
}


