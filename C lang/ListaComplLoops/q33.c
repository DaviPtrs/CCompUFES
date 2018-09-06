#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, i, j;
    printf("Digite 3 números positivos qualquer: ");
    scanf("%d %d %d", &n, &i, &j);


    printf("Os %d primeiros números divisíveis por %d ou por %d são: ", n, i, j);
    for(int num = 0, c = 0; c<n; num++){
        if ((num % i == 0) || (num % j == 0)){
            if (c<n-1)
                printf("%d, ", num);
            else
                printf("%d.", num);
            c++;
        }
    }
    puts(" ");
}