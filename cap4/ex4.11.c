#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int array[MAX_SIZE];
    int quantidade, valor, i;

    // Solicita a quantidade de elementos
    do {
        printf("Quantidade de elementos (1 a 9): ");
        scanf("%d", &quantidade);
        if (quantidade < 1 || quantidade > 9) {
            printf("Quantidade incorreta, forneca novamente!\n");
        }
    } while (quantidade < 1 || quantidade > 9);

    // Lê os elementos do array
    for (i = 0; i < quantidade; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Solicita o valor a ser inserido na primeira posição
    printf("Valor que sera inserido: ");
    scanf("%d", &valor);

    // Desloca os elementos para a direita
    for (i = quantidade; i > 0; i--) {
        array[i] = array[i - 1];
    }

    // Insere o valor na primeira posição
    array[0] = valor;

    // Imprime o array resultante
    for (i = 0; i <= quantidade; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
