#include <stdio.h>

int main() {
    double valor;
    double somatorio = 0.0;
    int quantidade = 0;

    // Loop para a leitura dos valores
    while (1) {
        printf("Entre com um valor: ");
        scanf("%lf", &valor);

        // Verifica se o valor é negativo
        if (valor < 0) {
            // Se o número negativo for o primeiro, exibe resultados iguais a zero
            if (quantidade == 0) {
                printf("Somatorio: %.2lf\n", somatorio);
                printf("Media: %.2lf\n", 0.0);
                printf("Quantidade: %d\n", 0);
            } else {
                // Calcula a média
                double media = somatorio / quantidade;

                // Exibe os resultados formatados
                printf("Somatorio: %.2lf\n", somatorio);
                printf("Media: %.2lf\n", media);
                printf("Quantidade: %d\n", quantidade);
            }
            break;
        }

        // Incrementa o somatório e a quantidade
        somatorio += valor;
        quantidade++;
    }

    return 0;
}
