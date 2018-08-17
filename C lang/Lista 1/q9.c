#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int id, qtd;
    float pgto;
    const float HOTDOG = 4.00;
    const float XSAL = 4.50;
    const float XBACON = 5.00;
    const float TORRADA = 2.00;
    const float REFRI = 1.50;

    printf("Digite o código e a quantidade do item: ");
    scanf("%d %d", &id, &qtd);

    
    switch (id)
    {
        case 1:
            printf("\nVocê comprou %d Hotdog(s).\nTotal a pagar: R$%.2f\n",qtd,(qtd*HOTDOG));
            break;
        case 2:
            printf("\nVocê comprou %d X-Salada.\nTotal a pagar: R$%.2f\n",qtd,(qtd*XSAL));
            break;
        case 3:
            printf("\nVocê comprou %d X-Bacon.\nTotal a pagar: R$%.2f\n",qtd,(qtd*XBACON));
            break;
        case 4:
            printf("\nVocê comprou %d Torrada(s).\nTotal a pagar: R$%.2f\n",qtd,(qtd*TORRADA));
            break;
        case 5:
            printf("\nVocê comprou %d Refrigerante(s).\nTotal a pagar: R$%.2f\n",qtd,(qtd*REFRI));
            break;
        default:
            printf("\nID INVÁLIDO!\n");
            break;
    }
}