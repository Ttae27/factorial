#include <stdio.h>

int factorial(int n)
{
    int fac = 1;


    while (n > 0)
    {
        fac *= n;
        n--;
    }
    return (fac);
}
