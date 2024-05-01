#include <stdio.h>

int main(void){
    float primeiro = 0;
    float segundo = 0;

    printf("Primeiro numero: ");
    scanf("%f",&primeiro);
    printf("Segundo numero: ");
    scanf("%f",&segundo);

    printf("%.2f + %.2f = %.2f\n",primeiro,segundo,primeiro + segundo);
    printf("%.2f - %.2f = %.2f\n",primeiro, segundo,primeiro - segundo);
    printf("%.2f * %.2f = %.2f\n",primeiro, segundo, primeiro * segundo);
    printf("%.2f / %.2f = %.2f\n",primeiro, segundo, primeiro / segundo);
    return 0;
}