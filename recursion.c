/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void faixa(int inicio, int fim){
    
    if(inicio<=fim){ 
        printf("%d\n", inicio);
        faixa(inicio+1, fim);//pode ser usado o pré incremento "++inicio"
    }   
}

int main(){   
    faixa(2000, 2000);
    return 0;
}
