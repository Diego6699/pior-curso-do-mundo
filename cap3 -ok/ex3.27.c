#include <stdio.h>
#include <float.h>

int main()
{
    float peso = 0.0, pessoMaisPesada = 0.0, media = 0.0;
    int pessoa = 1;
    while (peso > -1)
    {
        printf("Entre com o peso da pessoa %02d: ", pessoa);
        scanf("%f", &peso);
        if (pessoa == 1)
        {
            pessoMaisPesada = peso;
            if (peso >= 60.0)
            {
                media = peso;
            }
        }
        if (peso >= 60 && pessoa != 1)
        {
            if (peso > pessoMaisPesada)
            {
                pessoMaisPesada = peso;
            }
            if (media != 0.0)
            {
                media = (media + peso) / 2;
            }
            else
            {
                media = peso;
            }
        }
        ++pessoa;
    }
    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2fkg", pessoMaisPesada);
    return 0;
}
