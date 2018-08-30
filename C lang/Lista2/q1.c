#include <stdio.h>
#include <stdlib.h>

void main(){
    int largura, altura, ex, ey, dx, dy, menu, area;

        do{
            puts("=============================");
            puts("======ÁREA DO RETÂNGULO======");
            puts("=============================");
            puts("[1] para largura X altura");
            puts("[2] para coordenadas");
            printf("> ");
            scanf("%d", &menu);

            switch (menu){
                case 1:
                    printf("Digite a largura e altura do retângulo: ");
                    scanf("%d %d", &largura, &altura);
                    area = largura * altura;
                    break;
                case 2:
                    printf("Digite a coordenada do canto inferior esquerdo e do canto superior direito\n");
                    printf("EX: (1,2) (3,5) > ");
                    scanf(" (%d,%d) (%d,%d)", &ex, &ey, &dx, &dy);
                    area = (abs(dx - ex)) * (abs(dy - ey));
                    break;
                default:
                    puts("Opção inválida");
            }
        } while ((menu != 1) && (menu !=2));
    printf("A área do retângulo vale: %d\n", area);
}