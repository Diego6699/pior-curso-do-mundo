#include <stdio.h>

int main() {
    int array[10];
    int i, posicao;

    // Leitura dos elementos do array
    for (i = 0; i < 10; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Solicita a posição a ser removida e valida a entrada
    do {
        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", &posicao);
        if (posicao < 0 || posicao > 9) {
            printf("Posicao invalida, forneca novamente!\n");
        }
    } while (posicao < 0 || posicao > 9);

    // Remove o elemento na posição fornecida, deslocando os elementos para a esquerda
    for (i = posicao; i < 9; i++) {
        array[i] = array[i + 1];
    }

    // Imprime o array resultante
    for (i = 0; i < 9; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
