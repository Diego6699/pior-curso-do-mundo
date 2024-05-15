#include <stdio.h>

int main() {
    int idade_homem1, idade_homem2, idade_mulher1, idade_mulher2;

    // Solicita ao usuário fornecer as idades dos homens e das mulheres
    printf("Idade Homem 1: ");
    scanf("%d", &idade_homem1);
    printf("Idade Homem 2: ");
    scanf("%d", &idade_homem2);
    printf("Idade Mulher 1: ");
    scanf("%d", &idade_mulher1);
    printf("Idade Mulher 2: ");
    scanf("%d", &idade_mulher2);

    // Determina o homem mais velho e a mulher mais nova
    int homem_mais_velho, mulher_mais_nova;
    if (idade_homem1 > idade_homem2) {
        homem_mais_velho = idade_homem1;
    } else {
        homem_mais_velho = idade_homem2;
    }

    if (idade_mulher1 < idade_mulher2) {
        mulher_mais_nova = idade_mulher1;
    } else {
        mulher_mais_nova = idade_mulher2;
    }

    // Determina o homem mais novo e a mulher mais velha
    int homem_mais_novo, mulher_mais_velha;
    if (idade_homem1 < idade_homem2) {
        homem_mais_novo = idade_homem1;
    } else {
        homem_mais_novo = idade_homem2;
    }

    if (idade_mulher1 > idade_mulher2) {
        mulher_mais_velha = idade_mulher1;
    } else {
        mulher_mais_velha = idade_mulher2;
    }

    // Calcula a soma das idades do homem mais velho com a mulher mais nova
    int soma_idades = homem_mais_velho + mulher_mais_nova;

    // Calcula o produto das idades do homem mais novo com a mulher mais velha
    int produto_idades = homem_mais_novo * mulher_mais_velha;

    // Exibe a soma e o produto calculados
    printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma_idades);
    printf("Idade homem mais novo * idade mulher mais velha: %d", produto_idades);

    return 0;
}
