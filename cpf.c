/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool numerosNaoRepitidos(int cpf[]){
    int i;
    for(i=1; i<11; i++){
        if(cpf[i] != cpf[i-1]) return true;
    }
    return false;
}

bool digitoVerificador(int cpf[], int m[], int numero){
    int i, soma=0;
	for(i=0; i<numero; i++)
	{	soma = soma + cpf[i]*m[i];
	}
	int resto = ((soma*10) % 11)%10;
  	
	return resto == cpf[numero];
	
}
	
void regiao(int i)
{   char estados[10][100] = {
  
    "Rio Grande do Sul\n",
    "Distrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul e Tocantins\n",
    "Amazonas, Pará, Roraima, Amapá, Acre e Rondônia\n",
    "Ceará, Maranhão e Piauí\n",
    "Paraíba, Pernambuco, Alagoas e Rio Grande do Norte\n",
    "Bahia e Sergipe\n",
    "Minas Gerais\n",
    "Rio de Janeiro e Espírito Santo\n",
    "São Paulo\n",
    "Paraná e Santa Catarina\n"};  
    
    printf("%s", estados[i]);
}

int main()
{
	int cpf[11];
	int m1[9]={10,9,8,7,6,5,4,3,2};
	int m2[10]={11,10,9,8,7,6,5,4,3,2};
	int i, j;
	char entrada[50];
	
	printf("Entre com os 11 digitos do CPF:");
	fgets(entrada, 50, stdin);
	for(i = 0, j = 0; i < strlen(entrada); i++){
	    if (entrada[i]>= 48 && entrada[i]<=57){
	        cpf[j] = entrada[i] - 48; 
	        j++;
	    }
	}
	
    if (numerosNaoRepitidos(cpf) && digitoVerificador(cpf, m1, 9) && digitoVerificador(cpf, m2, 10)){
        printf("CPF Válido\n");
        regiao(cpf[8]); 
    }
    else printf ("Suspeito");
    
	return 0;
}


