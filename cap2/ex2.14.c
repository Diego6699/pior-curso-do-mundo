#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicita ao usuário fornecer seu peso em quilogramas e sua altura em metros
    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &peso);
    printf("Entre com sua altura em metros: ");
    scanf("%f", &altura);

    // Calcula o IMC (Índice de Massa Corpórea)
    imc = peso / (altura * altura);

    // Determina a situação do usuário com base no IMC calculado
    if (imc < 17.0) {
        printf("IMC: %.2f\nVoce esta muito abaixo do peso ideal!",imc);
    } else if (imc < 18.5) {
        printf("IMC: %.2f\nVoce esta abaixo do peso ideal!",imc);
    } else if (imc < 25.0) {
        printf("IMC: %.2f\nParabens! Voce esta em seu peso normal!",imc);
    } else if (imc < 30.0) {
        printf("IMC: %.2f\nAtencao, voce esta acima de seu peso (sobrepeso)!",imc);
    } else if (imc < 35.0) {
        printf("IMC: %.2f\nCuidado! Obesidade grau I!",imc);
    } else if (imc < 40.0) {
        printf("IMC: %.2f\nCuidado! Obesidade grau II!",imc);
    } else {
        printf("IMC: %.2f\nMuito cuidado!!! Obesidade grau III!",imc);
    }

    return 0;
}
