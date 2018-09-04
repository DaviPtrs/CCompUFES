#include <stdio.h>
#include <stdlib.h>

void main(){
    float altura, MAaltura = 0, mealtura, mediaAltH = 0, mediaAltM = 0;
    int sexo, nH = 0, nM = 0;
    for (int p=0; p<10; p++){
        while (1){
            printf("%dº Aluno\n", p+1);
            printf("Digite a altura e o sexo (1-Masculino ; 2-Feminino)\n>> ");
            scanf("%f %d", &altura, &sexo);
            if ((altura <= 0) || ((sexo != 1) && (sexo != 2)))
                printf("Dados inválidos, tente novamente\n");
            else
                break;
            }
        if (p==0)
            mealtura = altura;
        if (altura > MAaltura)
            MAaltura = altura;
        if (altura < mealtura)
            mealtura = altura;
        if (sexo == 1){
            nH ++;
            mediaAltH += altura;
        }else{
            nM ++;
            mediaAltM += altura;
        }
    }
    mediaAltH = mediaAltH / nH;
    mediaAltM = mediaAltM / nM;
    puts("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("Maior altura da sala: \t\t%.2f\n", MAaltura);
    printf("Menor altura da sala: \t\t%.2f\n", mealtura);
    printf("Média de altura dos homens: \t%.2f\n", mediaAltH);
    printf("Média de altura das mulheres \t%.2f\n", mediaAltM);
}