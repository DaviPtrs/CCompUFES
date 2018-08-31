#include <stdio.h>
#include <stdlib.h>

void main(){
    float n1,n2,n3,n4,soma,pfm;
    printf("Digite as 4 notas obtidas em provas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    soma = n1 + n2 + n3 + n4;

    if (soma >= 32){
        printf("O aluno foi APROVADO. Soma: %.2f\n", soma);
    } else if ((soma < 32) && (soma >= 20)){
        printf("O aluno está de PROVA FINAL. Soma: %.2f\n", soma);
        pfm = (100 - soma) / 10;
        printf("A nota mínima necessária na PF é de: %.2f pontos\n", pfm);
    } else {
        printf("O aluno foi REPROVADO. Soma: %.2f\n", soma);
    }
}