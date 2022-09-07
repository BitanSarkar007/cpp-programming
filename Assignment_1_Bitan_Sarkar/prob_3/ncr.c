// Program to find factorial of a number
#include <stdio.h>
#include <math.h>

long long int factorial(int n)
{
    long long int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main()
{
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d%d", &n, &r);
    long long int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("Value of nCr is: %lld\n", ncr);
}