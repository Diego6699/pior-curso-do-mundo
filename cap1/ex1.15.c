#include <stdio.h>

int main(void){
    float p,a,l,h;

    printf("Valor da largura: ");
    scanf("%f",&l);
    printf("Valor da altura: ");
    scanf("%f",&h);
    
    p = (2 * l)+(2 * h);
    a = l * h;

    printf("Perimetro = %.2f\n",p);
    printf("Area = %.2f",a);
    return 0;
}