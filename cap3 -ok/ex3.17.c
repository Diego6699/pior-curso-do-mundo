#include <stdio.h>
#include "ex3.17.h"

int main()
{
    int a = 0,b = 1,aux = 0,fat = 0;
    printf("Digite o fatorial: ");
    scanf("%d", &fat);

    if (fat >= 2)
    {

        for (int i = 0; i < fat; i++)
        {
            aux = a + b;
            a = b;
            b = aux;
        }
        printf("Fibonacci de %d e %d",fat,aux);
        
    }
    if (fat == 1 || fat == 0)
    {
        printf("Fibonacci de %d e 1",fat);
    }

    return 0;
}
