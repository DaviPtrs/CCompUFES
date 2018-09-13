#include <stdio.h>
#include <stdlib.h>

int diferencaHorario(int hr1, int min1, int hr2, int min2){
    int diferenca;
    if (hr1 < hr2)
        diferenca = (hr2 - hr1)*60 + (min2-min1);
    else if (hr1 > hr2)
        diferenca = (hr1 - hr2)*60 + (min1-min2);
    else {
        if (min1 < min2)
            diferenca = min2 - min1;
        else if (min1 > min2)
            diferenca = min1 - min2;
        else
            diferenca = 0;
    }
    return diferenca;
}


void main(){
    int hr1, hr2, min1, min2, dif;

    printf("Digite dois horários, em horas:minutos \n> ");
    scanf("%d:%d %d:%d", &hr1, &min1, &hr2, &min2);

    dif = diferencaHorario(hr1, min1, hr2, min2);

    printf("Passaram-se %d minuto(s) entre os horários!\n", dif);
}


