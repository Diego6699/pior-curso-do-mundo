#include <stdio.h>
#include <math.h>

int main() {
    int num_lados;
    float medida_lado;

    // Solicita ao usuário fornecer a quantidade de lados do polígono e a medida do lado
    printf("Entre com a quantidade de lados: ");
    scanf("%d", &num_lados);
    printf("Entre com a medida do lado: ");
    scanf("%f", &medida_lado);

    // Calcula o perímetro ou a área dependendo do número de lados
    float perimetro, area;
    if (num_lados == 3) {
        perimetro = 3 * medida_lado;
        printf("TRIANGULO de perimetro %.2f", perimetro);
    } else if (num_lados == 4) {
        area = medida_lado * medida_lado;
        printf("QUADRADO de area %.2f", area);
    } else if (num_lados == 5) {
        printf("PENTAGONO");
    } else {
        printf("Poligono nao identificado");
    }

    return 0;
}
