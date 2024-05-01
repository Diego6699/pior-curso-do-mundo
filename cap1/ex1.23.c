#include <stdio.h>
#include <stdlib.h>
int main(void){

    int idade,nascimento,atual;
    printf("Ano de nascimento: ");
    scanf("%d",&nascimento);

    printf("Ano atual: ");
    scanf("%d",&atual);
    idade = atual - nascimento;
    printf("Idade aproximada: %d anos",idade);
    return 0;
}