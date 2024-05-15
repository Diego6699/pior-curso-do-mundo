#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;

    // Solicita ao usuário para fornecer um número inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo
    if (numero < 0) {
        printf("Nao ha fatorial de numero negativo.\n");
    } else {
        // Calcula o fatorial do número
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        // Exibe o resultado do fatorial
        printf("%d! = %d\n", numero, fatorial);
    }

    return 0;
}
