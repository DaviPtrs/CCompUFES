#include <stdio.h>
#include <stdlib.h>

#define CORINGA1 20
#define CORINGA2 45

void main(){
    int maxTent,players,menorTentP,vencedor,n1,n2;
    float perdedores = 0;

    printf("Digite o número de players > ");
    scanf("%d",&players);

    printf("Digite o número máximo de tentativas > ");
    scanf("%d",&maxTent);

    int nJog = 1;
    do{
        printf("\nJogador %d:\n",nJog);
        int tent = 1;
        do{
            printf("Digite dois valores inteiros entre 0 e 100: ");
            scanf("%d %d",&n1,&n2);
            if (((n1==CORINGA1) && (n2==CORINGA2)) 
                || ((n2==CORINGA1) && (n1==CORINGA2))){
                
                if (nJog == 1){
                    menorTentP = tent;
                    vencedor = nJog;
                } else {
                    if (tent < menorTentP){
                        menorTentP = tent;
                        vencedor = nJog;
                    }
                }
                break;
            } else {
                if (tent == maxTent) perdedores++;
            }
        tent++;
        } while(tent <= maxTent);

    printf("=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/\n");
    nJog++;
    } while (nJog <= players);

    printf("\nVencedor: Jogador %d (tentativas: %d)\n",vencedor,menorTentP);
    printf("Percentual de jogadores que não acertaram: %.2f%\n",((perdedores/players)*100));
}
