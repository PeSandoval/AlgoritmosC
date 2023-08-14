#include <stdio.h>

int main()
{
    int n, rest, quotient, multiplier = 1;
    
    printf("Insert number: ");
    scanf("%i", &n);
    
    while(n > 0){
        
        quotient = n / 2;
        
        rest += (n % 2) * multiplier;
        
        n = quotient;
        
        multiplier *= 10;
    }
    
    printf("%i", rest);
    
    return 0;
}

