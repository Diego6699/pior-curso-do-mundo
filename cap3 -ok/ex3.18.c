#include <stdio.h>
#include <stdlib.h>

int main( void ){
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}