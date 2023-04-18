/******************************************************************************

1) faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde será apresentado uma lista de operações:

1-Saldo
2-Saque
3-Deposito

Ao iniciar o programa determine um valor inicio para a variável saldo, 
se o cliente escolher a opção 1 mostre o valor do saldo, 
caso escolha o valor 2 leia o valor a ser sacado e verifique se existe
saldo suficiente, se o saldo for maior ou igual , 
deduza da variável saldo o valor solicitado, caso não haja saldo
suficiente mostre a mensagem “Saldo Insuficiente”, 
caso a opção 3 seja escolhida adicione o valor informado de deposito ao saldo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int op;
    float saldo, saque, deposito, retirada, somaDeposito;
    
    printf("Informe saldo: ");
    scanf("%f", &saldo);
    printf("1 - Saldo, 2 - Saque, 3 - Depósito:");
    scanf("%i", &op);
    
    switch(op) {
        case 1:{
            printf("Seu saldo é de: %.2f", saldo);
            break;
        }
        case 2: {
            printf("Valor a ser sacado: ");
            scanf("%f", &saque);
            if(saldo >= saque) {
                retirada = saldo - saque;
                printf("Seu saldo atual é: %.2f", retirada);
            } else {
                printf("Saldo Insuficiente");
            }
            break;
        }
        case 3: {
            printf("Valor a ser depositado: ");
            scanf("%f", &deposito);
            somaDeposito = saldo + deposito;
            printf("Sei saldo atual é de: %.2f", somaDeposito);
            break;
        }
        default:{
            printf("Operação Inválida");
            break;
        }
    }
    
    return 0;
}
