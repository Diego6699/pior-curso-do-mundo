#include <stdio.h>

int main() {
    int n = 20; // O número de termos a serem exibidos
    int primeiro = 1, segundo = 1, proximo;

    // Exibe os dois primeiros termos da série de Fibonacci
    printf("%d %d ", primeiro, segundo);

    // Calcula e exibe os próximos termos da série de Fibonacci
    for (int i = 2; i < n; i++) {
        proximo = primeiro + segundo;
        printf("%d ", proximo);
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}
