#include <stdio.h>
#include <stdlib.h>

void main(){
    int vehQ = 0, vehKm, VehI = 0, kmTotal = 0;
    char newReg;

    do{
        printf("Informe uma quilometragem: ");
        scanf("%d", &vehKm);
        if (vehKm <= 0){
            printf("QUILOMETRAGEM INVÁLIDA!\n");
            vehQ ++;
            VehI ++;
        } else{
            vehQ ++;
            kmTotal += vehKm;
        }


    do{
        printf("Deseja realizar uma nova leitura? (S/N)? ");
        scanf(" %c", &newReg);
        newReg = toupper(newReg);
    } while ((newReg != 'S') && (newReg != 'N'));

    } while (newReg == 'S');

    printf("Quantidade de carros pesquisados: %d\n", vehQ);
    printf("Quantiade de dados inválidos: %d\n", VehI);
    printf("Quilometragem total: %d\n", kmTotal);
}