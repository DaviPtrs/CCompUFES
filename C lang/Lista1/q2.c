#include <stdio.h>
#include <stdlib.h>

void main(){
    float mensalidade = 0;
    int idade, qtdDoenca = 0; 

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Possui quantas doenças crônicas? [0 se nenhuma]: ");
    scanf("%d", &qtdDoenca);

    if ((idade < 0) || (qtdDoenca <0)){
        printf("Algo de errado não está certo, tente novamente...\n");
    } else if (idade <= 18){
        mensalidade = 83.15;
    } else if ((idade >= 19) && (idade < 33)){
        mensalidade = 133.88;
        mensalidade += mensalidade * (qtdDoenca*0.05);
    } else if ((idade > 33) && (idade <= 44)){
        mensalidade = 203.73;
        mensalidade += mensalidade * (qtdDoenca*0.10);
    } else if ((idade >= 45) && (idade <= 58)){
        mensalidade = 312.44;
        mensalidade += mensalidade * (qtdDoenca*0.15);
    } else if (idade > 58){
        mensalidade = 498.53;
        mensalidade += mensalidade * (qtdDoenca*0.30);
    } 
    
    if (mensalidade){
        printf("Valor da mensalidade: %.2f\n",mensalidade);
    }
    
}
