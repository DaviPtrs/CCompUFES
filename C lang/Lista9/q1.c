#include <stdio.h>
#include <stdlib.h>


int pertVet(int elem, int *vet, int sz){
    for(int i = 0; i<sz ; i++){
        if(elem == vet[i])
            return 1;
    }
    return 0;
}


void uniaoVet(int *v1, int *v2, int *v3, int t1, int t2, int *t3){
    int c = 0;
    
    for(int i = 0; i<t1; i++){
        if(!pertVet(v1[i], v3, c)){
            v3[c] = v1[i];
            c++;
        }
    }

    for(int i = 0; i<t2; i++){
        if(!pertVet(v2[i], v3, c)){
            v3[c] = v2[i];
            c++;
        }
    }
    *t3 = c;
    
}

void keynesianismo(int *v, int sz){
    for(int j = sz-1; j > 0; j--){
        for(int i = 0; i<j; i++){
            if(v[i] > v[i+1]){
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd){
    int *v3;
    int n3 = n1 + n2;
    v3 = malloc(n3 * sizeof(int));

    uniaoVet(x1, x2, v3, n1, n2, &n3);

    v3 = realloc(v3, n3 * sizeof(int));

    keynesianismo(v3, n3); 

    *qtd = n3;

    return v3;
}

void main(){
    int v1[5] = {1,3,5,6,7};
    int t1 = 5;

    int v2[5] = {1,3,4,6,8};
    int t2 = 5;

    int *v3;
    int t3;

    v3 = uniao(v1, v2, t1, t2, &t3);


    for(int i = 0; i<t3; i++){
        printf("%d ", v3[i]);
    }
    puts("");

    free(v3);
}