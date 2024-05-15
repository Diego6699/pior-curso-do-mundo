#include <stdio.h>
#include <stdbool.h>
#define TAM_ARRAY 5

int main(void)
{
    int array1[TAM_ARRAY] = {0}, array2[TAM_ARRAY] = {0}, arrayInterseccao[TAM_ARRAY];
    printf("Forneca os valores do primeiro array:\n");
    for (int i = 0; i < TAM_ARRAY; i++)
    {
        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }
    printf("Forneca os valores do segundo array:\n");
    for (int i = 0; i < TAM_ARRAY; i++)
    {
        printf("array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }
    for (int i = 0; i < TAM_ARRAY; i++)
    {
        for (int j = 0; i < TAM_ARRAY; j++)
        {
            if (array1[i] == array2[j])
            {
                arrayInterseccao[i] = array1[i];
            }
        }
    }
    for (int i = 0; i < TAM_ARRAY; i++)
    {
        printf("arrayInterseccao[%d] = %d",i,arrayInterseccao[i]);
    }
    
    return 0;
}