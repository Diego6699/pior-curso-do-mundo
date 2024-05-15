#include <stdio.h>
#include <stdlib.h>
int main(void){

    float num;
    printf("Valor do produto: ");
    scanf("%f",&num);
    float desconto = num * (0.09);
    printf("Preco de venda com 9%% de desconto: %.2f",num - desconto);
    return 0;
}