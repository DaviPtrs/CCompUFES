#include <stdio.h>
#include <stdlib.h>

void main()
{
    float altura, peso;

    puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    puts("=GUDE's BOLINHA CHAMPIONSHIP=");
    puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

    printf("\nAltura do jogador >> ");
    scanf("%f",&altura);
    printf("Peso do jogador >> ");
    scanf("%f",&peso);

    puts("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    if ((altura >= 1.75) && (altura <= 1.90)){
        if ((peso >= 70) && (peso <= 80)){
            printf("           ACEITO!\n");
        } else {
            printf("      RECUSADO POR PESO\n");
        }
    } else {
        if ((peso >= 70) && (peso <= 80)){
           printf("     RECUSADO POR ALTURA\n");
        } else {
           printf("     TOTALMENTE RECUSADO\n");
        }
    }
    puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}
