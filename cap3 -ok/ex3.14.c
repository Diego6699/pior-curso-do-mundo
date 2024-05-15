#include <stdio.h>
#include <stdlib.h>

int main( void ){

    int n1,n2,somatorio = 0,aux;

    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);

    if(n1 < n2){
        printf("Somatorio entre %d e %d: %d",n1,n1,somatorio);
        for (int i = n1; i <= n2; i++)
        {
            somatorio +=i;
        }

    }else{
        aux = n1;
        n1 = n2;
        n2 = aux;
        printf("Somatorio entre %d e %d: %d",n1,n1,somatorio);
        for (int i = n1; i <= n2; i++)
        {
            somatorio +=i;
        }
    }
    printf("Somatorio entre %d e %d: %d",n1,n2,somatorio);
    return 0;
}