#include <stdio.h>
#include <stdlib.h>

#define ALC 2.83
#define GASO 3.15

void main()
{
    float valorPgto, qtdLitros;
    int tipoComb;

    puts("Quantidade de litros abastecidos");
    printf("> ");
    scanf("%f",&qtdLitros);
    
    printf("Digite [1] para Álcool e [2] para Gasolina: ");
    scanf("%d",&tipoComb);

    if (tipoComb==1){
        valorPgto = qtdLitros * ALC;
        printf("Você abasteceu %.2f litros de Álcool!\n", qtdLitros);
        printf("Total a ser pago: R$ %.2f\n", valorPgto);
    } else if (tipoComb==2){
        valorPgto = qtdLitros * GASO;
        printf("Você abasteceu %.2f litros de Gasolina!\n", qtdLitros);
        printf("Total a ser pago: R$ %.2f\n", valorPgto);
    } else {
        printf("Opção inválida. Finalizando o programa...\n");
    }

}
