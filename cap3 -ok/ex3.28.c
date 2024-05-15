#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float saldo = 0.0, deposito = 0.0, saque = 0.0;
    int opcao;
    printf("Saldo inicial: ");
    scanf("%f",&saldo);
    printf("Operacoes: \n");
    printf("\t1) Deposito;\n");
    printf("\t2) Saque;\n");
    printf("\t3) Fim.\n");
    while (1)
    {

        printf("Operacao desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Valor a depositar: ");
            scanf("%f", &deposito);
            saldo += deposito;
            break;
        case 2:
            printf("Valor a sacar: ");
            scanf("%f", &saque);
            saldo -= saque;
            break;
        case 3:
            if (saldo > 0)
            {
                printf("Saldo final: R$%.2f\n", saldo);
                printf("Conta preferencial.");
            }
            else if (saldo == 0)
            {
                printf("Saldo final: R$%.2f\n", saldo);
                printf("Sem saldo.");
            }
            else
            {
                printf("Saldo final: -R$%.2f\n", saldo * -1);
                printf("Conta devedora.");
            }
            break;

        default:
            break;
        }
        if (opcao == 3)
        {
            break;
        }
        
    }

    return 0;
}