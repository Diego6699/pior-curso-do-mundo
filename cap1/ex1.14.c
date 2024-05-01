#include <stdio.h>
#include <stdlib.h>
int main(void){
    float l;
    printf("Valor do lado: ");
    scanf("%f",&l);
    float p = 4 * l;
    float a = l * l;
    printf("Perimetro = %.2f\n",p);
    printf("Area = %.2f",a);
    return 0;
}