// Project Euler 
// Problem 2

#include <stdio.h>

int main()
{
    int n = 1;
    int i = 2;
    int s, sum = 2;
    
    while (s < 4000000)
    {
        s = n + i;
        n = i;
        i = s;
        
        if(s%2 == 0)
        {
            sum += s;
        }
    }
    
    printf("Total is: %i\n", sum);
}
