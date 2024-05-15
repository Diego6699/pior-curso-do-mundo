#include <stdio.h>

int main() {
    float num1, num2, num3;
    float soma;

    // Solicita ao usuário fornecer três números decimais
    printf("N1: ");
    scanf("%f", &num1);
    printf("N2: ");
    scanf("%f", &num2);
    printf("N3: ");
    scanf("%f", &num3);

    // Verifica qual dos números é o menor e o substitui pela variável de soma
    if (num1 < num2 && num1 < num3) {
        soma = num2 + num3;
    } else if (num2 < num1 && num2 < num3) {
        soma = num1 + num3;
    } else {
        soma = num1 + num2;
    }
    // Exibe a soma dos dois maiores números com 2 casas de precisão
    printf("A soma dos dois numeros maiores fornecidos e %.2f", soma);
    return 0;
}
