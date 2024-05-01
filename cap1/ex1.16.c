#include <stdio.h>
#include <stdlib.h>

int main(void){
    float b = 0;
    float h = 0;

    printf("Valor da base: ");
    scanf("%f",&b);
    printf("Valor da altura: ");
    scanf("%f",&h);

    float a = (b*h)/2;
    printf("Area = %.2f",a);
    return 0;
}