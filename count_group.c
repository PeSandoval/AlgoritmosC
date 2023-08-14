#include <stdio.h>

int main()
{

    int nums[] = {5,2,2,3,4,4,4,4,1,1};
    int value, count = 10, total = 1;
    
    for(int i = 1; i < count; i++){
        
        if(nums[i] != nums[i-1]){
            total++;
        }
       
    }
    
    printf("%i", total);
    
    
    
    return 0;
}

