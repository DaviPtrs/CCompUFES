#include <stdio.h>
#include <stdlib.h>

void main(){
    int opcao;
    float n1, n2, res;

    while (1){

        puts("=/=/=/=/=/=/=/=/=/=/=/=/=");
        puts("Adição \t\t(opção 1)");
        puts("Subtração \t(opção 2)");
        puts("Multiplicação \t(opção 3)");
        puts("Divisão \t(opção 4)");
        puts("Saída \t\t(opção 5)");
        puts("=/=/=/=/=/=/=/=/=/=/=/=/=");
        printf("\nEscolha uma opção: ");
        scanf("%d",&opcao);

        switch (opcao){
            case 1:
                printf("Digite dois números para somar: ");
                scanf("%f %f", &n1, &n2);
                res = n1+n2;
                printf("O resultado é: %.2f\n", res);
                break;
            case 2:
                printf("Digite dois números para subtrair: ");
                scanf("%f %f", &n1, &n2);
                res = n1-n2;
                printf("O resultado é: %.2f\n", res);
                break;
            case 3:
                printf("Digite dois números para multiplicar: ");
                scanf("%f %f", &n1, &n2);
                res = n1*n2;
                printf("O resultado é: %.2f\n", res);
                break;
            case 4:
                printf("Digite dois números para dividir: ");
                scanf("%f %f", &n1, &n2);
                res = n1/n2;
                printf("O resultado é: %.2f\n", res);
                break;
            case 5:
                break;
            default:
                printf("Opção inválida!!\n");
        }
        if (opcao == 5) 
            break;
        else
            getchar();
            getchar();
            
    }
}