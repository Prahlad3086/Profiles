#include <stdio.h>  
#include <conio.h>  
  
int main()  
{  
    int a, x, y;  
    printf("Enter the number\n");  
    scanf("%d", &a);  
  
    int primes[a + 1];  
    for(x = 2; x <= a; x++)  
        primes[x] = x;  
  
    x = 2;  
    while ((x*x) <= a)  
    {  
        if (primes[x] != 0)  
        {  
            for(y = 2; y < a; y++)  
            {  
                if (primes[x] * y > a)  
                    break;  
                else  
                    primes[primes[x] * y] = 0;  
            }  
        }  
        x++;  
    }  
  
    for(x = 2; x <= a; x++)  
    {  
        if (primes[x] != 0)  
            printf("%d\n", Prime numbers:[x]);  
    }  
  
    return 0;  
}