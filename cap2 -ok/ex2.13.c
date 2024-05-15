#include <stdio.h>

int main() {
    float nota1, nota2, nota_optativa;

    // Solicita ao usuário fornecer as notas das duas avaliações normais e da avaliação optativa
    printf("Nota Av. 1: ");
    scanf("%f", &nota1);
    printf("Nota Av. 2: ");
    scanf("%f", &nota2);
    printf("Nota Optativa: ");
    scanf("%f", &nota_optativa);

    // Verifica se o aluno fez a avaliação optativa
    if (nota_optativa < 0) {
        // Se não fez, mantém as duas notas normais
        // Calcula a média simples
        float media = (nota1 + nota2) / 2;
        // Exibe a média com 2 casas de precisão
        printf("Media: %.2f\n", media);

        // Verifica se o aluno foi aprovado, reprovado ou está em exame
        if (media >= 6.0) {
            printf("Aprovado!");
        } else if (media >= 4.0) {
            printf("Exame.");
        } else {
            printf("Reprovado...");
        }
    } else {
        // Se fez a avaliação optativa, substitui a nota mais baixa entre as duas primeiras
        float menor_nota;
        if (nota1 < nota2) {
            menor_nota = nota1;
        } else {
            menor_nota = nota2;
        }

        // Verifica se a nota da avaliação optativa é maior que a menor nota das avaliações normais
        if (nota_optativa > menor_nota) {
            // Se for, substitui a menor nota pela nota optativa
            float media = (nota_optativa + nota1 + nota2 - menor_nota) / 2;
            // Exibe a média com 2 casas de precisão
            printf("Media: %.2f\n", media);

            // Verifica se o aluno foi aprovado, reprovado ou está em exame
            if (media >= 6.0) {
                printf("Aprovado!");
            } else if (media >= 4.0) {
                printf("Exame.");
            } else {
                printf("Reprovado...");
            }
        } else {
            // Se a nota da avaliação optativa não for maior que a menor nota das avaliações normais,
            // mantém as duas notas normais e calcula a média simples
            float media = (nota1 + nota2) / 2;
            // Exibe a média com 2 casas de precisão
            printf("Media: %.2f\n", media);

            // Verifica se o aluno foi aprovado, reprovado ou está em exame
            if (media >= 6.0) {
                printf("Aprovado!");
            } else if (media >= 4.0) {
                printf("Exame.");
            } else {
                printf("Reprovado...");
            }
        }
    }

    return 0;
}
