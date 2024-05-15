#include <stdio.h>
#include <stdlib.h>
int main(void){
    float horaAula;
    float desconto;
    int qtdAulas;

    printf("Valor da hora/aula: ");
    scanf("%f",&horaAula);

    printf("Quantidade de aulas: ");
    scanf("%d",&qtdAulas);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f",&desconto);

    float salario = horaAula * qtdAulas;
    desconto = salario * (desconto/100);
    printf("Salario Liquido: %.2f",salario - desconto);
    return 0;
}