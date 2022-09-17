// Use typedef to define a data type COMPLEX to represent complex numbers. Write C
// functions:
// (a) COMPLEX add (COMPLEX, COMPLEX) to add two complex numbers,
// (b) COMPLEX mult (COMPLEX, COMPLEX) to multiply two complex numbers.

#include <stdio.h>

typedef struct COMPLEXNUMBER
{
    int real;
    int img;
} COMPLEX;

COMPLEX add(COMPLEX a, COMPLEX b)
{
    COMPLEX sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    return (sum);
}

COMPLEX mult(COMPLEX a, COMPLEX b)
{
    COMPLEX val;
    val.real = (a.real * b.real) - (a.img * b.img);
    val.img = (a.real * b.img) + (a.img * b.real);
    return (val);
}

int main()
{
    COMPLEX a,b, sum, val;
    printf("Enter the real value of first number: %d\n");
    scanf("%d", a.real);
    printf("Enter the imaginary value of first number: %d\n");
    scanf("%d", a.img);
    printf("Enter the real value of second number: %d\n");
    scanf("%d", b.real);
    printf("Enter the imaginary value of second number: %d\n");
    scanf("%d", b.img);
    printf("\n a = %d + %di", a.real, a.img);
    printf("\n b = %d + %di", b.real, b.img);
    sum = add(a,b);
    val = mult(a,b);
    printf("\n sum = %d + %di", sum.real, sum.img);
    printf("\n multiplication = %d + %di", val.real, val.img);
}