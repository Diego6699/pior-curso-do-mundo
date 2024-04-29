#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A,B,b,h;
    printf("Valor da base maior: ");
    scanf("%d",&B);
    printf("Valor da base menor: ");
    scanf("%d",&b);
    printf("valor da altura: ");
    scanf("%d",&h);

    A = ((B + b)*h)/2;

    printf("Area = %d",A);
    return 0;
}