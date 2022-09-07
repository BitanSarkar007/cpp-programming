//Program to find sum of two large numbers
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    printf("Enter the value of a: ");
    scanf("%s", a);
    printf("Enter the value of b: ");
    scanf("%s", b);
    int la = strlen(a);
    int lb = strlen(b);
    int lc = la > lb ? la : lb;
    char c[lc+1];
    int i, j, k, carry = 0;
    for (i = 0; i < lc; i++)
    {
        c[i] = '0';
    }
    c[lc] = '\0';
    for (i = la-1, j = lb-1, k = lc-1; i >= 0 || j >= 0; i--, j--, k--)
    {
        int x = i >= 0 ? a[i]-'0' : 0;
        int y = j >= 0 ? b[j]-'0' : 0;
        int sum = x + y + carry;
        c[k] = sum%10 + '0';
        carry = sum/10;
    }
    if (carry)
    {
        c[0] = carry + '0';
    }
    printf("Sum of %s and %s is: %s\n", a, b, c);
}
