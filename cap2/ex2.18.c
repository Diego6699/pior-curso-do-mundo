#include <stdio.h>

int main(void){
    // Solicita ao usuário um número inteiro
    float n1,n2;
    char c;

    printf("N1: ");
    scanf("%f",&n1);
    printf("N2: ");
    scanf("%f",&n2);
    printf("Escolha uma operacao de acordo com o menu:\n\t+) Adicao;\n\t-) Subtracao;\n\t*) Multiplicacao;\n\t/) Divisao.\nOperacao: ");
    scanf(" %c", &c);

    // Verifica se o número é igual a 2, 4, 6 ou 8 usando switch
    switch(c) {
        case '+':
            printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f",n1,n2,n1*n2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
            break;
        default:
            printf("Opcao invalida!");
    }
    return 0;
}