#include <stdio.h>

#define TAM_ARRAY 5

int main() {
  int array_original[TAM_ARRAY];
  int array_invertido[TAM_ARRAY];

  // Preenchendo o array original
  for (int i = 0; i < TAM_ARRAY; i++) {
    printf("array[%d]: ", i);
    scanf("%d", &array_original[i]);
  }

  // Invertendo o array
  for (int i = 0; i < TAM_ARRAY; i++) {
    array_invertido[TAM_ARRAY - 1 - i] = array_original[i];
  }

  // Exibindo o array invertido
  printf("\nValores do array invertido:\n");
  for (int i = 0; i < TAM_ARRAY; i++) {
    printf("arrayInv[%d] = %d\n",i, array_invertido[i]);
  }

  return 0;
}