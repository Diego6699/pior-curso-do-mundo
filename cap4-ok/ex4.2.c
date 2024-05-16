#include <stdio.h>

int main( void ){
    int array[5] ={0};
    int arrayMult[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
        arrayMult[i] = array[i] * 5;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("arrayMult[%d] = %d\n",i,arrayMult[i]);
    }
    return 0;
}