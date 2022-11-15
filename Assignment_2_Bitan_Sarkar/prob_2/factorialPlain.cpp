#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int num;
    printf("Enter the number you want to find factorial of: ");
    scanf("%d", &num);
    printf("\n");
    printf("The factorial of %d is: %d\n", num, factorial(num));
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <=n; i++)
    {
        fact*=i;
    }
    return fact;
}