// Program to find factorial of a number
#include <stdio.h>
#include <math.h>

long long int factorial(int n) //function to find the factorial of a number

{
    long long int f = 1;
    for (int i = 1; i <= n; i++) //loop for the factorial
        f = f * i; //f is the factorial
    return f;
}

int main()
{
    int n,r;
    printf("Enter the value of n and r: "); //n and r are the values of n and r respectively
    scanf("%d%d", &n, &r);
    long long int ncr = factorial(n)/(factorial(r)*factorial(n-r)); //ncr is the value of nCr
    printf("Value of nCr is: %lld\n", ncr);
}