/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    
    printf("Insert number: ");
    scanf("%i", &n);
    
    for(i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    
    if(sum == n){
        printf("Sum of a perfect number!");
    } else{
        printf("It isn't a perfect number");
    }
    
    return 0;
}

