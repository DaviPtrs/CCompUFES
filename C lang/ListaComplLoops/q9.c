#include <stdio.h>
#include <stdlib.h>

void main(){
    int n;
    
    printf("Digite um número qualquer: ");
    scanf("%d", &n);

    for(int num = 1, c = 0 ; c<n ; num++){
        if (num % 2 != 0){
            printf("%d ", num);
            c++;
        }
    }
    putchar(' ');
}