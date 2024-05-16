#include <stdio.h>

int main() {
    int array[5];
    int i;

    // Leitura dos elementos do array
    for (i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Desloca os elementos para a esquerda, removendo o primeiro elemento
    for (i = 0; i < 4; i++) {
        array[i] = array[i + 1];
    }

    // Imprime o array resultante
    for (i = 0; i < 4; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
