#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int d1, d2, opcao;
    srand((unsigned)time(NULL));

    while (1){
        d1 = (rand() % 6) + 1;
        d2 = (rand() % 6) + 1;

        printf("Dado 1 caiu %d\n", d1);
        printf("Dado 2 caiu %d\n", d2);
        if (d1>d2)
            printf("Dado 1 é maior que o Dado 2\n");
        else if (d1<d2)
            printf("Dado 1 é menor que o Dado 2\n");
        else
            printf("Os dois são iguais\n");

        while (1){
            printf("Deseja jogar de novo? (1-sim / 2-não) >> ");
            scanf("%d", &opcao);
            if ((opcao == 1) || (opcao == 2))
                break;
            else
                printf("Opção inválida!\n");
        }
        
        if (opcao == 2)
            break;
    }
}