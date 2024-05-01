#include <stdio.h>
#include <stdlib.h>
int main(void){

    float A,D,d;

    printf("Valor da diagonal maior: ");
    scanf("%f",&D);
    printf("Valor da diagonal menor: ");
    scanf("%f",&d);

    A = (D*d)/2;
    printf("Area = %.2f",A);
    return 0;
}