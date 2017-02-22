// Project Euler 
// login: jbbuah pwd: 4projecteuler
// Problem 1

#include <stdio.h>

int main()
{
    int n = 999;
    int s = 0;
    
    while(n > 0)
    {
        if ((n%3 == 0)||(n%5==0))
        {
            s += n;
        }
        
        n--;
    }
    
    printf("Total: %i\n", s);
    
    return 0;
    
}
