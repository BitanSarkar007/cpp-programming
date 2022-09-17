// Write a C program to perform addition and multiplication of two large integers of size
// N and M where N and M are user inputs. Note that the integers are too large to be stored in
// built-in types.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, m;
    printf("Enter the size of the integers: ");
    scanf("%d%d", &n, &m); //n and m are the sizes of the integers
    char a[n], b[m];
    printf("Enter the first integer: ");
    scanf("%s", a); //a is the first integer
    printf("Enter the second integer: ");
    scanf("%s", b); //b is the second integer
    int sum[n + 1], product[n + m];
    for (int i = 0; i < n + 1; i++)
    {
        sum[i] = 0; //initializing the sum array to 0
    }
    for (int i = 0; i < n + m; i++)
    {
        product[i] = 0; //initializing the product array to 0
    }
    for (int i = n - 1; i >= 0; i--) //loop for the addition

    {
        int carry = 0;
        for (int j = m - 1; j >= 0; j--) //loop for the addition
        {
            int temp = (a[i] - '0') * (b[j] - '0') + carry + product[i + j + 1]; //temp is the temporary variable for the product
            product[i + j + 1] = temp % 10; //product is the product of the two integers
            carry = temp / 10; //carry is the carry for the product
        }
        product[i] += carry; //product is the product of the two integers
    }
    int carry = 0;
    for (int i = n + m - 1; i >= 0; i--) //loop for the addition

    {
        int temp = (a[i - (n + m - n)] - '0') + (b[i - (n + m - m)] - '0') + carry + sum[i]; //temp is the temporary variable for the sum
        sum[i] = temp % 10; //sum is the sum of the two integers
        carry = temp / 10; //carry is the carry for the sum
    }
    sum[0] = carry;
    printf("The sum of the two integers is: "); //printing the sum
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d", sum[i]); //printing the sum
    }
    printf("\n");
    printf("The product of the two integers is: ");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d", product[i]); //printing the product
    }
    printf("\n");
    return 0;
}
