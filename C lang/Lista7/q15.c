#include <stdio.h>
#include <stdlib.h>

void inverte_vetor(int *v1, int *v2, int n){
    for(int i = 0; i<n; i++){
        v2[n-i-1] = v1[i];
    }
}

void main(){
    int v1[5] = {1,2,3,4,5};
    int v2[5];

    inverte_vetor(v1, v2, 5);

    for(int i = 0; i<5; i++){
        printf("%d\n", v2[i]);
    }
}
