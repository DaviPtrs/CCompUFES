#include <stdio.h>
#include <stdlib.h>

void main()
{
    int novoJogo, qtdJogos = 0, vitFla = 0, vitVasc =0 , empates = 0, golsFla, golsVasc;

    do{
        qtdJogos++;

        printf("Digite o placar entre Flamengo e Vasco [Ex: 2x1] > ");
        scanf("%dx%d", &golsFla, &golsVasc);

        if (golsFla > golsVasc){
            vitFla++;
            printf("\nVencedor: FlAMENGO\n");
        } else if (golsFla < golsVasc){
            vitVasc++;
            printf("\nVencedor: VASCO\n");
        } else {
            empates++;
            printf("\nEMPATE!\n");
        }

    printf("\nNovo jogo (1 – Sim;  2 – Não)? ");
    scanf("%d", &novoJogo);

    } while (novoJogo == 1);

    puts("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("Quantidade de jogos: %d\n",qtdJogos);
    printf("Vitórias do Flamengo: %d\n",vitFla);
    printf("Vitórias do Vasco: %d\n",vitVasc);
    printf("Número de empates: %d\n",empates);
    if (vitFla > vitVasc){
        printf("Venceu a maioria: FLAMENGO\n");
    } else if (vitFla < vitVasc){
        printf("Venceu a maioria: VASCO\n");
    } else {
        printf("Venceu a maioria: N/A\n");
    }
    puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}
