//Write a C program to calculate the integral of a function in a given range
//using the trapezoidal rule. The function is given by f(x) = x^2 + 2x + 1.
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, n, h, x, sum, y;
    printf("Enter the value of a, b, n: ");
    scanf("%f %f %f", &a, &b, &n); //a, b, n are the lower limit, upper limit and number of sub-intervals respectively
    h = (b - a) / n; //h is the width of each sub-interval
    sum = 0;
    for (int i = 1; i < n; i++) //loop for the sum of the function
    {
        x = a + i * h; //x is the value of x at each sub-interval
        y = x * x + 2 * x + 1; //y is the value of the function at each sub-interval
        sum = sum + y; //sum is the sum of the function at each sub-interval
    }
    sum = h * (sum + (a * a + 2 * a + 1) / 2 + (b * b + 2 * b + 1) / 2); //formula for the trapezoidal rule
    printf("The value of the integral is: %f\n", sum); 
    return 0;
}
