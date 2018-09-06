#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int numPC, numPlyr, tentativas;
    srand((unsigned)time(NULL));
    numPC = (rand() % 1000) + 1;

    for(int c = 1; ; c++){
        printf("Tente acertar o número: ");
        scanf("%d", &numPlyr);

        if (numPC == numPlyr){
            printf("ACERTOU\n");
            printf("Tentativas: %d\n", c);
            break;
        }else{
            printf("EROU!!\n");
            if (numPlyr > numPC)
                printf("O número é menor\n");
            else
                printf("O número é maior\n");
        }
    }
}