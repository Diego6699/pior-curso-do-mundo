#include <stdio.h>
#include <limits.h>
int main()
{
    int valor = 0, menor = 0, maior = 0;

    printf("Entre com um valor: ");
    scanf("%d", &valor);
    if (valor > -1)
    {
        /* code */
        menor = valor;
        maior = valor;
    }

    while (valor > -1)
    {
        if (maior < valor)
        {
            maior = valor;
        }
        if (menor > valor)
        {
            menor = valor;
        }

        printf("Entre com um valor: ");
        scanf("%d", &valor);
    }
    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d", maior);

    return 0;
}
