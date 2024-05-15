#include <stdio.h>

// Função para converter Celsius para Fahrenheit
double celsius_para_fahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}

// Função para converter Fahrenheit para Celsius
double fahrenheit_para_celsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    char opcao;
    float temperatura;

    // Exibe o menu
    printf("Selecione uma opcao:\n");
    printf("C) Converter Celsius para Fahrenheit\n");
    printf("F) Converter Fahrenheit para Celsius\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);

    // Verifica a opção selecionada pelo usuário
    switch(opcao) {
        case 'C':
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", temperatura, celsius_para_fahrenheit(temperatura));
            break;
        case 'F':
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", temperatura, fahrenheit_para_celsius(temperatura));
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;
}
