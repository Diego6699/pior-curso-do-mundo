#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicita ao usuário fornecer três números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    // Ordena os três números em ordem decrescente
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 < num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Exibe os números em ordem decrescente
    printf("%d >= %d >= %d", num1, num2, num3);

    return 0;
}
