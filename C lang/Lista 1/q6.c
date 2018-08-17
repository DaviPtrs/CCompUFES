#include <stdio.h>
#include <stdlib.h>

void main() {
    int hrs,mins,segs;

    printf("Digite um valor em segundos: >");
    scanf("%d",&segs);
    printf("%d segs > ", segs);

    mins = segs / 60;
    hrs = mins / 60;
    mins -= 60*hrs;
    segs = segs - (60*mins) - (3600*hrs);

    printf("%d:%d:%d\n", hrs, mins, segs);
}