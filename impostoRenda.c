/******************************************************************************

4-Utilizando o comando de condição aninhado, faça umalgoritmo em linguagem C para 2,5: 
Faça o cálculo do salário líquido e mostre ao final o resultado calculado através de um salário
bruto informado seguindo as devidas regras: 
•Primeiro deduzir o INSS de 11% do salário bruto antes de verificar a faixa do IR 
•Faixa de R$ 1,00 a R$ 1093,98Isento de IR
•Faixa de R$ 1093,99 a R$ 2.826,65 7.5 % de taxa de IR
•Faixa de R$ 2826,66 a R$ 3.751,05 15% de taxa de IR
•Faixa de R$ 3751,06 a R$ 4.664,68 22.5% de taxa de IR •e acima27.5% de taxa de IR 
•Ao final calcular e exibir Salário Líquido = (Saláriobruto –INSS) –IR 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario_bruto, salario_liquido, inss, dif_inss, imp_renda;
    printf("Insira o salario bruto: ");
    scanf("%f", &salario_bruto);
    inss = salario_bruto * 0.11;
    dif_inss = salario_bruto - inss;
    
    if(dif_inss > 1 && dif_inss <= 1093.98) {
        imp_renda = 0;
    } else {
        if(dif_inss > 1093.99 && dif_inss <= 2826.65) {
            imp_renda = dif_inss * 0.075;
        } else {
            if(dif_inss > 2826.66 && dif_inss <= 3751.05) {
                imp_renda = dif_inss *0.15;
            } else {
                if(dif_inss > 3751.06 && dif_inss <=4664.68) {
                    imp_renda = dif_inss * 0.225;
                } else {
                    imp_renda = dif_inss * 0.275;
                }
            }
        }
    }

    salario_liquido = (salario_bruto - inss) - imp_renda;
    printf("O salário líquido é de: %f", salario_liquido);
    return 0;
}
    
    
    
    