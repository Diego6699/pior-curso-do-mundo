#include <stdio.h>

int main(void){
    int b = 0;
    int h = 0;

    printf("Valor da base: ");
    scanf("%d",&b);
    printf("Valor da altura: ");
    scanf("%d",&h);

    int a = (b*h)/2;
    printf("Area = %d",a);

    return 0;
}