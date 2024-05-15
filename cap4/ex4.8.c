#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int arr[5];

    int size = (sizeof(arr) / sizeof(int));
    bool par = false;
    bool impar = false;
    for (int i = 0; i < size; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            par = true;
        }

        if (arr[i] % 2 > 0)
        {
            impar = true;
        }
    }
    // pares
    if (par)
    {
        /* code */
        printf("Numeros pares:");
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                printf(" %d", arr[i]);
            }
        }
        printf(".\n");
    }
    else
    {
        printf("Numeros pares: nao ha.\n");
    }

    // impares
    if (impar)
    {
        /* code */
        printf("Numeros impares:");
        for (int i = 0; i < size; i++)
        {
            if (!(arr[i] % 2 == 0))
            {
                printf(" %d", arr[i]);
            }
        }
        printf(".");
    }
    else
    {
        printf("Numeros impares: nao ha.");
    }
    return 0;
}