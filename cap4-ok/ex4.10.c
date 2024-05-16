#include <stdio.h>

#define TAM_ARRAY 5

int main() {
  int array[TAM_ARRAY], arrayCopia[TAM_ARRAY], valorLimite, i, j = 0;

  // Preenchendo o primeiro array
  for (i = 0; i < TAM_ARRAY; i++) {
    printf("Digite o valor para array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  // Solicitando o valor limite
  printf("\nDigite o valor limite: ");
  scanf("%d", &valorLimite);

  // Copiando valores maiores que o limite para o segundo array
  for (i = 0; i < TAM_ARRAY; i++) {
    if (array[i] > valorLimite) {
      arrayCopia[j] = array[i];
      j++;
    }
  }

  // Verificando se houve valores copiados
  if (j == 0) {
    printf("\nNao houve copia!\n");
  } else {
    // Exibindo os valores copiados
    printf("\nValores copiados para o segundo array:\n");
    for (i = 0; i < j; i++) {
      printf("arrayCopia[%d] = %d\n", i, arrayCopia[i]);
    }
  }

  return 0;
}