#include <stdio.h>
#include <stdlib.h>

#define TAM_i 3
#define TAM_J 2
int main(void)
{
    int array[TAM_i][TAM_J] = {0};
    for (int i = 0; i < TAM_i; i++)
    {
        for (int j = 0; j < TAM_J; j++)
        {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < TAM_i; i++)
    {
        for (int j = 0; j < TAM_J; j++)
        {
            printf("%03d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}