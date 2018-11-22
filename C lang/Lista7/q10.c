#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array;
    array = (int *) malloc(5*sizeof(int));

    for(int i = 0; i<5; i++){
        printf("Nº %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i<5; i++){
        array[i] = array[i]*2;
        printf("%d ", array[i]);
    }
    puts("");

    free(array);

    return 0;
}
