#include <stdio.h>

int main()
{
    int numeros[5];

    // Solicita ao usuário para fornecer 5 números positivos
    for (int i = 0; i < 5; i++)
    {
        printf("N%d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verifica se o número fornecido é positivo
        if (numeros[i] <= 0)
        {
            printf("Forneca apenas numeros positivos.\n");
            return 0;
        }
    }

    // Desenha o gráfico de barras com asteriscos
    for (int i = 10; i >= 1; i--)
    {
        printf("%04d", i);
        if (i > 6)
        {
            printf("    *  ");
        }
        else if (i > 5)
        {
            printf("    * *");
        }
        else if (i > 3)
        {
            printf("   ** *");
        }
        else if (i > 2)
        {
            printf("  *** *");
        }
        else
        {
            printf("  *****");
        }
        printf("\n");
    }

    return 0;
}