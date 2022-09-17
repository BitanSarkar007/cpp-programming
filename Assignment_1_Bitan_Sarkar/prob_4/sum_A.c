//Program to find sum of sin series 

#include<stdio.h>
#include<math.h>

long long int factorial(int n) 
{
    long long int f = 1;
    for (int i = 1; i <= n; i++) //for loop to find factorial
        f = f * i; 
    return f;
}


double calc(double rad)
{
    int sign = 1;
    double res = 0.0;
    for (int i = 1; i < 15; i+=2) //for loop to find the sum of the series
    {
        res = res + (sign)*(pow(rad, i)/factorial(i)); //sin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - x^11/11! + x^13/13! - x^15/15! + ...
        sign = sign*-1; //sign alternates between + and -
    }
    return res;
}



int main()
{
    double res = 0.0; int n, x;
    printf("Enter the value of x in degrees: \n");
    scanf("%d", &x);
    double rad = x * (3.14159/180); //converting degrees to radians
    res = calc (rad); //passing address of res to calc function
    printf("%0.05f\n", res);
}

//Author - Bitan Sarkar