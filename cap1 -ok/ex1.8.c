#include <stdio.h>
#include <stdlib.h>

int main(void){
    int p;
    int a;
    int l;
    int h;

    printf("Valor da largura: ");
    scanf("%d",&l);
    printf("Valor da altura: ");
    scanf("%d",&h);
    
    p = (2 * l)+(2 * h);
    a = l * h;

    printf("Perimetro = %d\n",p);
    printf("Area = %d",a);
    return 0;
}