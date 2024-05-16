#include <stdio.h>

int main( void ){
    float array[5] = {0.0};
    int busca = 0,ocorrencia = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);
    }
    printf("Buscar por: ");
    scanf("%d", &busca);
    int tamanho = (int)(sizeof(array) / sizeof(float));
    for (int i = 0; i < tamanho; i++)
    {
        if (busca == array[i])
        {
            ++ocorrencia;
        }
        
    }
    if (ocorrencia == 1)
    {
        printf("O array contem %d ocorrencia do valor %d.",ocorrencia,busca);
    }
    
    else if (ocorrencia == 0)
    {
        printf("O array nao contem o valor %d.",ocorrencia);
    }else{
        printf("O array contem %d ocorrencias do valor %d.",ocorrencia,busca);
    }
    
    return 0;
}