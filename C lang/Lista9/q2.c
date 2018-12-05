#include <stdio.h>
#include <stdlib.h>


int pertVet(int elem, int *vet, int sz){
    for(int i = 0; i<sz ; i++){
        if(elem == vet[i])
            return 1;
    }
    return 0;
}

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd){
    int *v3;
    int c = 0;

    for(int i = 0; i < n1; i++){
        if(pertVet(x1[i], x2, n2)){
            if (c == 0)
                v3 = malloc((c+1) * sizeof(int));
            else
                v3 = realloc(v3, (c+1) * sizeof(int));
            v3[c] = x1[i];
            c++;
        }
    }

    *qtd = c;
    return v3;
}


void main(){
    int v1[5] = {1,3,5,6,7};
    int t1 = 5;

    int v2[5] = {1,3,4,6,8};
    int t2 = 5;

    int *v3;
    int t3;

    v3 = interseccao(v1, v2, t1, t2, &t3);


    for(int i = 0; i<t3; i++){
        printf("%d ", v3[i]);
    }
    puts("");

    free(v3);
}