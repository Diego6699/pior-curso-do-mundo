#include <stdio.h>

// Função para converter número arábico para número romano
void arabic_to_roman(int num) {
    if (num <= 0 || num >= 4000) {
        printf("Número fora do intervalo válido.\n");
        return;
    }

    // Arrays de valores e símbolos romanos
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Loop para converter o número em romano
    for (int i = 0; i < 13; i++) {
        // Enquanto o número for maior ou igual ao valor atual do array
        while (num >= valores[i]) {
            // Imprime o símbolo romano correspondente
            printf("%s", simbolos[i]);
            // Subtrai o valor correspondente do número
            num -= valores[i];
        }
    }
}

int main() {
    int num;

    // Solicita ao usuário um número no intervalo de 1 a 3999
    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &num);

    // Exibe o número inserido
    printf("%d = ", num);

    // Chama a função para converter o número para romano
    arabic_to_roman(num);
    printf("\n");

    return 0;
}
