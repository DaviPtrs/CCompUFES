#include <stdio.h>
#include <stdlib.h>

int pertence(int elem, int vet[], int c){
    for(int i = 0; i<=c; i++){ //Procura até o índice C, se o elem está presente no vetor
        if (elem == vet[i])
            return 1;        
    }

    return 0;
}

void main(){
    int nums[10], num;

    printf("Digite 10 inteiros distintos\n");
    for (int i = 0; i<10; i++){
        while (1){
            printf("> ");
            scanf("%d", &num);
            if (!(pertence(num, nums, i)))//Verifica se o elemento digitado já está no vetor
                break;
            printf("O número %d já pertence ao vetor, digite outro valor!\n", num);
        }
        nums[i] = num; //Se o loop anterior foi interrompido, preenche o vetor cm o elemento digitado
    }

    printf("Vetor resultante: "); //Printa o vetor
    for (int i = 0; i<10; i++){
        printf("%d ", nums[i]);
    }
    puts("");
}