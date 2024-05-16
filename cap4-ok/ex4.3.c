#include <stdio.h>

int main( void ){
    float array[5] ={0.0};
    float somatorio = 0.0,produtorio=1.0;
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ",i);
        scanf("%f",&array[i]);
        somatorio +=array[i];
        produtorio *= array[i];
    }
    printf("Somatorio: %.2f\n",somatorio);
    printf("Produtorio: %.2f",produtorio);
    return 0;
}