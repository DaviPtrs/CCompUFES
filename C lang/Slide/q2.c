#include <stdio.h>
#include <stdlib.h>

#define BONUS 0.15

void main(){
    char nome1[50], nome2[50];
    float salario1, salario2, vendas1, vendas2;

    puts("=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/\n");
    printf("Nome 1: ");
    scanf("%s",&nome1);
    printf("Salário de %s: R$ ",nome1);
    scanf("%f",&salario1);
    printf("Vendas de %s: R$ ",nome1);
    scanf("%f",&vendas1);

    puts("\n=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/\n");
    printf("Nome 2: ");
    scanf("%s",&nome2);
    printf("Salário de %s: R$ ",nome2);
    scanf("%f",&salario2);
    printf("Vendas de %s: R$ ",nome2);
    scanf("%f",&vendas2);
    puts("\n=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/\n");

    salario1 += BONUS*vendas1;
    salario2 += BONUS*vendas2;

    if (salario1 > salario2){
        printf("%s tem o maior salário, no valor de R$%.2f!\n",nome1,salario1);
    } else if (salario1 < salario2){
        printf("%s tem o maior salário, no valor de R$%.2f!\n",nome2,salario2);
    } else if (salario1 == salario2){
        printf("%s e %s têm salários iguais, no valor de R$%.2f!\n",nome1,nome2,salario1);
    }
    puts("\n=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/");
}