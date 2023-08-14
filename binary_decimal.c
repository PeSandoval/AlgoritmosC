#include <stdio.h>

int main()
{
    int n, quotient, rest, pot=1, sum=0;
    
    printf("Insert number: ");
    scanf("%i", &n);
    
    while(n != 0){
        quotient = n / 10;
        rest = n % 10;
        
        sum += rest * pot;
        
        n = quotient;
        pot = pot*2;
    }
    
    printf("The number in decimal is: %i", sum);
    
    return 0;
}

