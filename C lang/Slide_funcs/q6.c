#include <stdio.h>
#include <stdlib.h>

int calcMins(int horas, int minutos){
    int total = (horas*60) + minutos;
    return total;
}


void main(){
    int hrs, min, minTotal;

    printf("Digite um valor em horas e um em minutos: ");
    scanf("%d %d", &hrs, &min);

    minTotal = calcMins(hrs, min);

    printf("%d hora(s) e %d minuto(s) equivalem a %d minuto(s).\n", hrs, min, minTotal);
}


