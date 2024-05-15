#include <stdio.h>
#include <stdlib.h>
int main(void){
    int numero;
    printf("Forneca um numero inteiro: ");
    scanf("%d",&numero);
    printf("Sucessor de 1992: %d\n",numero + 1);
    printf("Antecessor de 1992: %d",numero - 1);
    return 0;
}