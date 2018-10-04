#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int ledsConfig[10] = {6,2,5,5,4,5,6,3,7,6};
    int valor;
    int ledsQtd = 0;

    printf("Digite um valor a ser representado: ");
    scanf("%d", &valor);

    printf("Para representar o valor %d, precisa-se de ", valor);
    do{
        ledsQtd += ledsConfig[(valor%10)];
        valor = valor/10;       
    }while (valor !=0);
    
    printf("%d Leds!\n", ledsQtd);
}
