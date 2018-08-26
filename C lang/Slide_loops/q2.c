#include <stdio.h>

void main(){
    for (int c = 10; c <= 100; c++){
        if ((c % 2) != 0) printf("%d ",c);
        if ((c % 25) == 0) printf("\n");
    }
}