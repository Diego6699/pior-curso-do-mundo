#include <stdio.h>
#include <stdlib.h>

int main( void ){
    int n1,n2,par;
    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);
    if (n1 <= n2)
    {
        for (int i = n1; i <= n2; i++)
        {

            if (i % 2 == 0)
            {
                par +=1;
            }
            
        }
        printf("Numeros pares entre %d e %d: %d",n1,n2,par);
    }else{
        for (int i = n2; i <= n1; i++)
        {

            if (i % 2 == 0)
            {
                par +=1;
            }
            
        }
        printf("Numeros pares entre %d e %d: %d",n2,n1,par);
    }
    
    return 0;
}