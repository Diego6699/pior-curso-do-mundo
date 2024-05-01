#include <stdio.h>
#include <stdlib.h>

int main(void){
    float d,c,a,r,pi;
    r = 10.5;
    //printf("Valor do raio do circulo: ");
    //scanf("%f",&r);
    pi= 3.141592;
    c = 2 * pi * r;
    d = 2 * r;
    a = pi * (r * r);
    printf("Diametro = %.2f\n",d);
    printf("Circunferencia =  %.2f\n",c);
    printf("Area = %.2f",a);
    return 0;
}