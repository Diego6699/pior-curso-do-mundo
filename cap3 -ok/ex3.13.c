#include <stdio.h>
#include <stdlib.h>

int main( void ){

    int n1,n2,mult2 = 0,mult3=0,mult4=0;
    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);
    fflush(stdin);
    if (n1 <= n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            //multiplo3 de 2
            if (i % 2 == 0)
            {
                mult2 +=1;
            }

            //multiplo3 de 3
            if (i % 3 == 0)
            {
                mult3 +=1;
            }
            //multiplo3 de 3
            if (i % 4 == 0)
            {
                mult4 +=1;
            }
            
        }


    }else{
        for (int i = n2; i <= n1; i++)
        {
            //multiplo3 de 2
            if (i % 2 == 0)
            {
                mult2 +=1;
            }

            //multiplo3 de 3
            if (i % 3 == 0)
            {
                mult3 +=1;
            }
            //multiplo3 de 3
            if (i % 4 == 0)
            {
                mult4 +=1;
            }
            
        }
    }
        printf("Multiplos de 2: %d\n",mult2);
        printf("Multiplos de 3: %d\n",mult3);
        printf("Multiplos de 4: %d",mult4);
    return 0;
}