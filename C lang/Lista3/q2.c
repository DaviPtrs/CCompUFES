#include <stdio.h>
#include <stdlib.h>

void main(){
    int codOp; 
    float valor, saldo = 0;
    puts("=-=-=-=-=-=-=-=");
    puts("[1] DEPÓSITO");
    puts("[2] RETIRADA");
    puts("[3] SAIR");
    puts("=-=-=-=-=-=-=-=");

    puts("\nDigite o código da operação, seguido do valor");
    printf("Ex: 1 500 (DEPOSITAR 500)");
    puts(" ");

    while (1){
        printf("> ");
        scanf("%d %f", &codOp, &valor);

        if (codOp == 3){
            break;
        }

        switch (codOp){
            case 1:
                saldo += valor;
                break;
            case 2:
                saldo -= valor;
                break;
            default:
                printf("\nCódigo de operação inválido. Tente novamente!\n");
        }
        puts(" ");
    }
    printf("\nSaldo bancário: R$ %.2f --> ", saldo);
    if (saldo > 0)
        printf("CONTA POSITIVA\n");
    else if (saldo == 0)
        printf("CONTA ZERADA\n");
    else
        printf("CONTA ESTOURADA\n");
    
}