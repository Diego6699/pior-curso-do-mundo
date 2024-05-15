#include <stdio.h>

int main() {
    float alfa, gama, beta;

    // Solicita ao usuário fornecer os três ângulos internos do triângulo
    printf("alfa: ");
    scanf("%f", &alfa);
    printf("beta: ");
    scanf("%f", &beta);
    printf("gama: ");
    scanf("%f", &gama);

    // Verifica se os ângulos fornecidos formam um triângulo válido
    if (alfa + gama + beta == 180) {
        // Verifica se é um triângulo retângulo
        if (alfa == 90 || gama == 90 || beta == 90) {
            printf("Triangulo RETANGULO");
        }
        // Verifica se é um triângulo obtusângulo
        else if (alfa > 90 || gama > 90 || beta > 90) {
            printf("Triangulo OBTUSANGULO");
        }
        // Se não for nenhum dos casos acima, é um triângulo acutângulo
        else {
            printf("Triangulo ACUTANGULO");
        }
    } else {
        // Se os ângulos fornecidos não formarem um triângulo válido, exibe uma mensagem de erro
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
    }

    return 0;
}
