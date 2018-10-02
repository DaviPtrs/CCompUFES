#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int x[5];
int y[5];

void opcoes(char opc){
    int flag;
    switch (opc){
        case 'S':
            for(int i = 0; i<5; i++){
                printf("Soma da %dª coord: %d\n", i+1, (x[i] + y[i]));
            }
            break;
        
        case 'P':
            for(int i = 0; i<5; i++){
                printf("Produto da %dª coord: %d\n", i+1, (x[i] * y[i]));
            }
            break;
        
        case 'M':
            for(int i = 0; i<5; i++){
                printf("Soma da %dª coord: %d\n", i+1, (x[i] - y[i]));
            }
            break;
        
        case 'I':
            printf("Intersecção entre X e Y: ");
            for(int i = 0; i<5; i++){
                for(int c = 0; c<5; c++){
                    if (x[i] == y[c])
                        printf("%d ", x[i]);
                }
            }
            puts("");
            break;
        
        case 'D':
            printf("Diferença entre X e Y: ");
            for(int i = 0; i<5; i++){
                flag = 0;
                for(int c = 0; c<5; c++){
                    if (x[i] == y[c])
                        flag = 1;
                }
                if (flag == 0)
                    printf("%d ", x[i]);
            }
            puts("");
            break;

        case 'Z': break;
            default:
                puts("OPÇÃO INVÁLIDA!");
    }
}

char menu(){
    char opc;
    puts("Escolha uma opção");
    puts("S-Soma dos X e Y de cada posição");
    puts("P-Produto dos X e Y de cada posição");
    puts("M-Subtração dos X e Y de cada posição");
    puts("I-Intersecção entre X e Y");
    puts("D-Elementos diferentes entre X e Y");
    puts("Z-SAIR");
    printf("> ");
    scanf(" %c", &opc);
    opcoes(opc);
    return opc;
}

void main(){
    printf("Digite 5 valores para x e y: ");
    for(int i = 0; i<5; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    while (menu() != 'Z'){
    }
}