#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1, n2, calculos = 0;
    char newDt;
    float res;

    while (1){

    printf("Digite dois valores: ");
    scanf("%d %d", &n1, &n2);
    
    while (n2 == 0){
        printf("Valor inválido! Digite novamente: ");
        scanf("%d", &n2);
    }

    res = ((float)n1) / ((float)n2);
    calculos ++;
    printf("A divisão de %d por %d vale: %.2f\n\n",n1,n2,res);

    while (1){
        printf("DESEJA REALIZAR OUTRO CÁLCULO? (S/N) >> ");
        scanf(" %c", &newDt);
        newDt = toupper(newDt);
        if ((newDt == 'S') || (newDt == 'N')) break;
    }

    if (newDt == 'S')
        continue;
    else
        break;
    }

    printf("Foram realizados %d cálculo(s)!\n", calculos);
}