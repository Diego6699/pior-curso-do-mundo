#include <stdio.h>
#include <stdlib.h>
int main(void){
    float f,c;
    printf("Temperatura em graus Celsius: ");
    scanf("%f",&c);
    f = 1.8 * c + 32;
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit",c,f);
    return 0;
}