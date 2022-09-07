// Program to find roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int roots(int a, int b, int c)
{
    double d, x1, x2;
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        if (a != 0)
        {
            x1 = ((-b + sqrt(d))) / (2 * a);
            x2 = ((-b - sqrt(d))) / (2 * a);
            printf("Roots of the equation are: %f %f\n", x1, x2);
        }
        if (a == 0)
        {
            printf("Not a quadratic equation\n");
        }
        
    }
    if (d==0)
    {
        if (a != 0)
        {
            x1 = -b/(2*a);
            x2 = -b/(2*a);;
            printf("Roots of the equation are: %f %f\n", x1, x2);
        }
        if (a == 0)
        {
            printf("Not a quadratic equation\n");
        }
    }
    if(d<0)
    printf("Roots are imginary\n");
    return 0;
}


int main()
{
    int a,b,c;
    printf("Enter the real positive roots of the quadratic equation: ");
    scanf("%d%d%d", &a, &b, &c);
    roots(a, b, c);
}
