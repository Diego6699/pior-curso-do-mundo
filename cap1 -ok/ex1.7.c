#include <stdio.h>

int main(void){
    int l;
    printf("Valor do lado: ");
    scanf("%d",&l);
    int p = 4 * l;
    int a = l * l;
    printf("Perimetro = %d\n",p);
    printf("Area = %d",a);
    return 0;
}