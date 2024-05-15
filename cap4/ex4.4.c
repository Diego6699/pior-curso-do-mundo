#include <stdio.h>

int main(void)
{
    float array[5] = {0.0};
    int busca = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);
    }
    printf("Buscar por: ");
    scanf("%d", &busca);
    int tamanho = (int)(sizeof(array) / sizeof(float));
    for (int i = 0; i < tamanho; i++)
    {
        if (busca == array[i])
        {
            printf("Indice %d: ACHEI\n",i);
        }else{
            printf("Indice %d: NAO ACHEI\n",i);
        }
        
    }

    return 0;
}