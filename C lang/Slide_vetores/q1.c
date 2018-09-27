#include <stdio.h>
#include <stdlib.h>

void main(){
    float notas[10];
    float media = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media = media/10;

    printf("A média é %.2f pontos.\n", media);
    printf("As notas acima da média foram: ");

    for (int i = 0; i < 10; i++){
        if (notas[i] > media)
            printf("%.2f ", notas[i]);
    }
    puts(" ");
}