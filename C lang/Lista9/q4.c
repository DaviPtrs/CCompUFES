#include <stdio.h>
#include <stdlib.h>

void progAritCheck(int *v, int n){
    int dif;

    if(n == 1){
        printf("NÃO\n");
        exit(1);
    }

    for(int i = 0; i < n-1; i++){
        if(i == 0){
            dif = v[i+1] - v[i];
        }else{
            if(v[i+1] - v[i] != dif){
                printf("NÃO\n");
                exit(1);
            }
        }
    }
    printf("%d\n", dif);
}


void main(){
    int *v;
    int n;

    scanf("%d", &n);
    v = malloc (n * sizeof(int));

    for(int i = 0; i<n; i++){
        scanf("%d", &v[i]);
    }

    progAritCheck(v, n);
    
    free(v);
}