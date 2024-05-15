#include <stdio.h>
#include <stdlib.h> // Para a função abs()

int main() {
    int altura;

    // Leitura da altura
    printf("Altura: ");
    scanf("%d", &altura);

    // Verificação da altura
    if (altura == 0) {
        printf("Altura igual a zero. Nenhum triângulo será produzido.\n");
    } else {
        if (altura > 0) {
            // Triângulo normal
            for (int i = 1; i <= altura; i++) {
                for (int j = 0; j < altura - i; j++) {
                    printf(" ");
                }
                for (int j = 0; j < 2 * i - 1; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else {
            // Triângulo invertido
            altura = abs(altura);
            for (int i = altura; i >= 1; i--) {
                for (int j = 0; j < altura - i; j++) {
                    printf(" ");
                }
                for (int j = 0; j < 2 * i - 1; j++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    }

    return 0;
}
