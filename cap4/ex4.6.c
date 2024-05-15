#include <stdio.h>
#include <limits.h>

int main(void)
{
    int array[5] = {0};
    int indices[5] = {0};
    int buscar = 0;
    int ocorrencia = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Buscar por: ");
    scanf("%d", &buscar);
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == buscar)
        {
            indices[i] = i;
            ++ocorrencia;
        }
    }

    if (ocorrencia == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            if (array[i] == buscar)
            {
                printf("O valor %d foi encontrado no indice %d do array.", buscar, indices[i]);
            }
        }
    }
    else if (ocorrencia == 2)
    {
        int duas = 1;
        printf("O valor %d foi encontrado nos indices ", buscar);
        for (int i = 0; i < 5; i++)
        {
            if (array[i] == buscar)
            {
                if (duas == 1)
                {
                    printf("%d e ", indices[i]);
                    ++duas;
                }
                else
                {
                    printf("%d ", indices[i]);
                }
            }
        }
        printf("do array.");
    }
    else if (ocorrencia > 2)
    {
        int tres = 1;
        printf("O valor %d foi encontrado nos indices ", buscar);
        for (int i = 0; i < 5; i++)
        {
            if (array[i] == buscar)
            {
                if (tres == 1)
                {
                    printf("%d, ", indices[i]);
                    ++tres;
                }
                else if (tres == 2)
                {
                    printf("%d e ", indices[i]);
                    ++tres;
                }
                else
                {
                    printf("%d ", indices[i]);
                }
            }
        }
        printf("do array.");
    }
    else
    {
        printf("O array nao contem o valor %d.", buscar);
    }

    return 0;
}
