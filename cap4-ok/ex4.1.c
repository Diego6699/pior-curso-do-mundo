#include <stdio.h>

int main( void ){

    int array[5] ={0};
    int arrayCubo[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
        arrayCubo[i] = array[i] * array[i] * array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("arrayCubo[%d] = %d\n",i,arrayCubo[i]);
    }
    
    
    return 0;
}