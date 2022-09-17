// Program to find roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int roots(int a, int b, int c)
{
    double d, x1, x2;
    d = (b * b) - (4 * a * c); //d is the discriminant
    if (d > 0)
    {
        if (a != 0)
        {
            x1 = ((-b + sqrt(d))) / (2 * a); //x1 is the first root
            x2 = ((-b - sqrt(d))) / (2 * a); //x2 is the second root
            printf("Roots of the equation are: %f %f\n", x1, x2);
        }
        if (a == 0)
        {
            printf("Not a quadratic equation\n");//if a is 0, the equation is not quadratic
        }
        
    }
    if (d==0)
    {
        if (a != 0)
        {
            x1 = -b/(2*a); //x1 is the root
            x2 = -b/(2*a);; //x2 is the root
            printf("Roots of the equation are: %f %f\n", x1, x2);
        }
        if (a == 0)  //if a is 0, the equation is not quadratic
        {
            printf("Not a quadratic equation\n");
        }
    }
    if(d<0) //if d is negative, the roots are imaginary
    {
        printf("Imaginary roots\n");
    }
    return 0;
}


int main()
{
    int a,b,c;
    printf("Enter the real positive roots of the quadratic equation: ");
    scanf("%d%d%d", &a, &b, &c); //a, b, c are the coefficients of the quadratic equation
    roots(a, b, c);
}
