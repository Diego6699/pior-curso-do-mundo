#include <stdio.h>

int main() {
    float num1, num2;
    float soma, diferenca;

    // Solicita ao usuário fornecer dois números decimais
    printf("Entre com um numero:  ");
    scanf("%f", &num1);
    printf("Entre com outro numero: ");
    scanf("%f", &num2);

    // Calcula a soma dos dois números
    soma = num1 + num2;

    // Verifica se a soma é maior que 10
    if (soma > 10) {
        // Se a soma for maior que 10, exibe os dois números com 2 casas de precisão
        printf("Os numeros fornecidos foram %.2f e %.2f",num1,num2);
    } else {
        // Se a soma não for maior que 10, calcula a diferença dos dois números
        diferenca = num1 - num2;
        // Exibe a diferença com 2 casas de precisão
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", num1, num2, diferenca);
    }

    return 0;
}
