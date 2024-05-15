#include <stdio.h>

int main() {
    int idade;
    int total_menos_de_21 = 0;
    int total_mais_de_50 = 0;

    // Loop para solicitar idade das pessoas
    while (1) {
        printf("Idade da pessoa: ");
        scanf("%d", &idade);

        // Verifica se a idade é negativa
        if (idade < 0) {
            break;
        }

        // Conta o total de pessoas com menos de 21 anos e mais de 50 anos
        if (idade < 21) {
            total_menos_de_21++;
        } else if (idade > 50) {
            total_mais_de_50++;
        }
    }

    // Exibe o total de pessoas com menos de 21 anos e mais de 50 anos
    printf("Total de pessoas menores de 21 anos: %d\n", total_menos_de_21);
    printf("Total de pessoas com mais de 50 anos: %d\n", total_mais_de_50);

    return 0;
}
