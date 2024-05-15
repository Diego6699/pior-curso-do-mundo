#include <stdio.h>
#include <stdlib.h>

int main( void ){
    int count = 4;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        for (int j = 0; j < count; j++)
        {
            printf("*");
        }
        printf("\n");
        --count;
    }
    
    return 0;
}