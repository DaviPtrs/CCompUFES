#include <stdio.h>
#include <stdlib.h>

void main(){
    int c = 0, n = 1;

    while (1){
        if (c == 5) break;
        if (n % 3 == 0){
            printf("%d\n", n);
            c++;
        }
        n++;
    }
}

