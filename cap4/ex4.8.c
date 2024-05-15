#include <stdio.h>

int main( void ){
    
    int *c = NULL;
    {
        int b = 12;
        c = &b;
    }
    printf("%d",*c);
    return 0;
}