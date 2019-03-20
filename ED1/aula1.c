//DAVI PETRIS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ex1(){
    int inteiro = 10, *p1;
    float real = 1.5, *p2;
    char caractere = 'c', *p3;

    p1 = &inteiro;
    p2 = &real;
    p3 = &caractere;

    printf("Antes da modificação:\n%d\n%.2f\n%c\n", *p1, *p2, *p3);

    *p1 = 5;
    *p2 = 2.75;
    *p3 = 'g';
    
    printf("Depois da modificação:\n%d\n%.2f\n%c\n", *p1, *p2, *p3);

}

void ex2(){
    int var1, var2, *p1, *p2;

    p1 = &var1;
    p2 = &var2;

    printf("var1 => %p\n", p1);
    printf("var2 => %p\n", p2);

    if (p1 > p2){
        printf("O maior endereço é %p\n", p1);
        printf("O maior endereço é %p\n", &(*p1));
    }else{
        printf("O maior endereço é %p\n", p2);
        printf("O maior endereço é %p\n", &(*p2));
    }
}

int trocaInteiros(int *n1, int *n2){
    if (*n1 > *n2){
        int swap = *n1;
        *n1 = *n2;
        *n2 = swap;

        return 1;
    }else{
        return 0;
    }
}

void ex4(int *array, int size, int num){
    for(int i = 0; i<size; i++){
        *array = num;
        if(i != size-1)
            array++;
    }
}

void inverte(int n, int* vet){
    int vet2[n];

    for(int i = n-1; i >= 0; i--){
        vet2[9-i] = vet[i];
    }
    
    for(int i = 0; i<n; i++){
        vet[i] = vet2[i];
    }
}

int subString(char* str1, char* str2){
    int sz1 = strlen(str1), sz2 = strlen(str2);

    if(sz2 > sz1){
        return 0;
    }else if (sz2 == sz1){
        return !strcmp(str1, str2);
    }else{
        for(int i = 0; i<sz1; i++){
            int flag = 0;
            for(int c = 0; c<sz2; c++){
                if(*str1 == *str2)
                    flag = 1;
                else
                    flag = 0;

                if(flag == 0){
                    str1 = str1 - c;
                    str2 = str2 - c;
                    break;
                }
                str1++;
                str2++;
            }
            if(flag == 0)
                str1++;
            else
                return 1;
        }
        return 0;

    }
    
}

// int main(){
//     int n1, n2;
//     while (scanf("%d %d", &n1, &n2) == 2){
//         if (trocaInteiros(&n1, &n2)){
//             printf("TROCADO: %d %d\n", n1, n2);
//         } else {
//             printf("ORIGINAL: %d %d\n", n1, n2);
//         }
//     }
//     return 0;
// }



void main(){
    printf("%d\n", subString("oasdasi", "oi"));
}