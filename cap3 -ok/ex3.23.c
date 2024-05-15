#include <stdio.h>
#include <stdlib.h>
#define NUM 10

int main( void ){
    float nota,media = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Nota %02d: ",i);
        scanf("%f",&nota);
        media += nota;
    }
    printf("A media aritmetica das dez notas e: %.2f",media/10);
    return 0;
}