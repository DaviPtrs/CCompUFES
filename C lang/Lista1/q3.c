#include <stdio.h>
#include <stdlib.h>

void main()
{
    int idade;

    while (1){
        printf("Idade do atleta >> ");
        scanf("%d", &idade);

        if (idade < 5){
            printf("Idade incompatível, tente novamente...\n");
        } else {
            break;
        }
    }
    
    if (idade <= 10){
        printf("Categoria Infantil\n");
    } else if ((idade > 10) && (idade < 18)){
        printf("Categoria Juvenil\n");
    } else if ((idade >= 18) && (idade <= 30)){
        printf("Categoria Profissional\n");
    } else if (idade > 30){
        printf("Categoria Sênior\n");
    }
}
