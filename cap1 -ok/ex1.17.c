#include <stdio.h>
#include <stdlib.h>
int main(void){

    float A,B,b,h;
    printf("Valor da base maior: ");
    scanf("%f",&B);
    printf("Valor da base menor: ");
    scanf("%f",&b);
    printf("valor da altura: ");
    scanf("%f",&h);

    A = ((B + b)*h)/2;

    printf("Area = %.2f",A);
    return 0;
}