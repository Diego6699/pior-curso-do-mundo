#include <stdio.h>
#include <stdlib.h>
int main(void){

    int primeiro = 0;
    int segundo = 0;

    printf("Primeiro numero: ");
    scanf("%d",&primeiro);
    printf("Segundo numero: ");
    scanf("%d",&segundo);

    int media = (primeiro + segundo)/2;
    printf("Media aritmetrica: %d",media);
    return 0;
}