#include <stdio.h>
#include <stdlib.h>
int main(void){
    float c,f;
    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f",&f);
    c = (f - 32)/1.8;
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius",f,c);
    return 0;
}