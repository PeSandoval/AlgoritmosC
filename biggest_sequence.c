#include <stdio.h>

int main()
{
    int seq[] = {7, 3, 4, 8, 2, 1, 4, 6, 7};
    int numbers = 9, count = 0, max;
    
    for (int i = 1; i < numbers; i++){
        
        if(seq[i] > seq[i-1]) count++;
        else count = 1;
        
        if(count > max) max = count;
    }
    
    printf("The biggest sequence is: %i", max);
    
    return 0;
}
