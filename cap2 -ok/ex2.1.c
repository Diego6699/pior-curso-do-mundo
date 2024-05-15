#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    int num = 0;

    printf("Entre com um numero: ");
    scanf("%d",&num);

    bool isImpar = num % 2;

    if (!isImpar)
    {
        printf("O numero %d e par.",num);
        
    }else{
        printf("O numero %d e impar.",num);
    }
    
    return 0;
}