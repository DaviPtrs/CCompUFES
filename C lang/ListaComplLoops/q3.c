#include <stdio.h>
#include <stdlib.h>

void main(){


    for (int n = 1; n <= 100 ; n++){
        printf("%d ", n);
    }
    putchar(' ');

    int c = 1;
    while (c<=1){
        printf("%d ", c);
        c++;
    }
    putchar(' ');

    int a = 1;
    do{
        printf("%d ", a);
        a++;
    } while (a <= 100);
    putchar(' ');
}

