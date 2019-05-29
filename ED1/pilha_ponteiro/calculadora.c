#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "calculadora.h"

int convertCharToNum(char c){
    return(((int) c) - 48);
}

int isOp(char c){
    return((c == '-') || (c == '+') || (c == '*') || (c == '/'));
}

void opera(tPilha *numeros, char operador){
    celulaPilha *n1, *n2;
    n2 = pop(numeros);
    n1 = pop(numeros);
    int res;

    switch (operador)
    {
    case '-':
        res = n1->num - n2->num;
        break;
    case '+':
        res = n1->num + n2->num;
        break;
    case '*':
        res = n1->num * n2->num;
        break;
    case '/':
        res = n1->num / n2->num;
        break;
    }
    liberaCelula(n1);
    liberaCelula(n2);
    push(numeros, criaCelula(res));
}

int calcIni(char *input, int tam, tPilha *numeros){
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
                opera(numeros, input[i]);
                printf("Operação %c\n", input[i]);
            }
        }else if(isdigit(input[i])){
            num *= 10;
            num += convertCharToNum(input[i]);
        }else if((input[i] == '\n') || (input[i] == '\0')){
            printf("Calculando...\n");
            break;
        }
        else{
            if(flag == 0){
                contNums++;
                if(sinal == 1){
                    sinal = 0;
                    num = -num;
                }
                push(numeros, criaCelula(num));
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

void printResultado(tPilha *calculos){
    printf("=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Resultado = %d\n", calculos->Topo->num);
    printf("=-=-=-=-=-=-=-=-=-=-=\n");

}

int main(){

    char *input = malloc(MAXTAM *sizeof(char));
    fgets(input, MAXTAM, stdin);

    tPilha *calculos = criaPilha();
    
    if(calcIni(input, MAXTAM, calculos) == 2){
        printf("=-=-SYNTAX ERROR-=-=\n");
    }else{
        printResultado(calculos);
    }

    liberaPilha(calculos);

    return 0;
}
