#include <stdio.h>

int main( void ){

    int array1[5] = {0}, array2[5] = {0}, arraySoma[5] = {0};

    printf("Forneca os valores do primeiro array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("array1[%d]: ",i);
        scanf("%d",&array1[i]);
    }

    printf("Forneca os valores do segundo array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("array1[%d]: ",i);
        scanf("%d",&array2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        arraySoma[i] = array1[i] + array2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("arraySoma[%d] = %d\n",i,arraySoma[i]);
    }
    return 0;
}