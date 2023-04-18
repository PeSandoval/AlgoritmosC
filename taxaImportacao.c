/******************************************************************************

Utilizando o comando de condição aninhado, faça um algoritmo em linguagem C para 2,5: Identifique e calcule a taxa de importação
baseado no valor das mercadorias informadas na alfandega sabendo que o valor base é de 
U$ 500,00 mostre o valor calculado ao final: •Valor declarado atéU$ 500, isento
•De U$500,01 a U$700,00 10% em cima da diferençado valor base.
•De U$700,01 a U$1000,00 20% em cima da diferençado valor base.
•De U$1000,01 a U$3000,00 30% em cima da diferençado valor base.
•De U$3000,01 a U$10.000,00 50% em cima da diferençado valor base.
•Acima deU$10.000,00 não serápermitida a importação

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor_produto, tx_impo;
    printf("Insira o valor do produto: ");
    scanf("%f", &valor_produto);
    
    if(valor_produto <= 500) {
        printf("Produto isento");
    } else {
        if(valor_produto >= 500.01 && valor_produto <= 700){
            tx_impo = valor_produto * 0.1;
            printf("Taxa de Importação = %f", tx_impo);
            } else {
                if(valor_produto >= 700.01 && valor_produto <= 1000) {
                    tx_impo = valor_produto * 0.2;
                    printf("Taxa de Importação = %f", tx_impo);
                } else {
                    if(valor_produto >= 1000.01 && valor_produto <= 3000) {
                        tx_impo = valor_produto * 0.3;
                        printf("Taxa de Importação = %f", tx_impo);
                    } else {
                        if(valor_produto >= 3000.01 && valor_produto <= 10000) {
                            tx_impo = valor_produto * 0.5;
                            printf("Taxa de Importação = %f", tx_impo);
                        } else {
                            printf("Importação não permitida");
                        }
                    }
                }
            }
        }
    

    return 0;
}
    
    
    
    