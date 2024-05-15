#include <stdio.h>

int main() {
    int idade;

    // Solicita a idade do usuário
    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    // Verifica a classe eleitoral baseada na idade fornecida
    if (idade < 16) {
        printf("Nao eleitor.\n");
    } else if (idade >= 18 && idade <= 65) {
        printf("Eleitor obrigatorio.");
    } else {
        printf("Eleitor facultativo.");
    }

    return 0;
}
