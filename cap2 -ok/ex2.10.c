#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    // Solicita ao usuário fornecer as medidas dos lados do triângulo
    printf("a: ");
    scanf("%f", &lado1);
    printf("b: ");
    scanf("%f", &lado2);
    printf("c: ");
    scanf("%f", &lado3);

    // Verifica se as medidas fornecidas formam um triângulo válido
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        // Verifica se é equilátero
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triangulo EQUILATERO\n");
        }
        // Verifica se é isósceles
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Triangulo ISOSCELES");
        }
        // Se não for nenhum dos casos acima, é escaleno
        else {
            printf("Triangulo ESCALENO");
        }
    } else {
        // Se as medidas não formarem um triângulo válido, exibe uma mensagem de erro
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    return 0;
}
