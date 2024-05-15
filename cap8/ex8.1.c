#include <stdio.h>
void printArray(int *arr, int size);
int main(void)
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(arr, sizeof(arr) / sizeof(int));
    printf("%lld",sizeof(int));
    return 0;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]= %d\n", i, arr[i]);
    }
}