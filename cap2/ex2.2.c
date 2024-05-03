#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num1 = 0;
    int num2 = 0;
    printf("Entre com um numero: ");
    scanf("%d",&num1);
    printf("Entre com outro numero: ");
    scanf("%d",&num2);

    if (num1 <= num2)
    {
        printf("Ordem crescente: %d <= %d",num1,num2);
    }else{
        printf("Ordem crescente: %d <= %d",num2,num1);
    }
    
    return 0;
}