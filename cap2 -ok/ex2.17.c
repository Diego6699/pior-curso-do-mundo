#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número inteiro
    printf(" Entre com um valor inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é igual a 2, 4, 6 ou 8 usando switch
    switch(numero) {
        case 2:
            printf("O valor fornecido foi 2.");
            break;
        case 4:
            printf("O valor fornecido foi 4.");
            break;
        case 6:
            printf("O valor fornecido foi 6.");
            break;
        case 8:
            printf("O valor fornecido foi 8.");
            break;
        default:
            printf("Valor invalido.");
    }

    return 0;
}
