#include <stdio.h>
#include <stdlib.h>

int main(void){

    int primeiro = 0;
    int segundo = 0;

    printf("Primeiro numero: ");
    scanf("%d",&primeiro);
    printf("Segundo numero: ");
    scanf("%d",&segundo);

    printf("%d + %d = %d\n",primeiro,segundo,primeiro + segundo);
    printf("%d - %d = %d\n",primeiro, segundo,primeiro - segundo);
    printf("%d * %d = %d\n",primeiro, segundo, primeiro * segundo);
    printf("%d / %d = %d\n",primeiro, segundo, primeiro / segundo);
    return 0;
}