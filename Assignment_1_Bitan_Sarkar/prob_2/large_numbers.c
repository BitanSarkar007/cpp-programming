// Write a C program to perform addition and multiplication of two large integers of size
// N and M where N and M are user inputs. Note that the integers are too large to be stored in
// built-in types.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
char *multiply(char *num1, char *num2);
char *add(char *num1, char *num2);

char *multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int i_n1 = 0;
    int i_n2 = 0;
    int carry = 0;
    int sum;
    int n1, n2;
    int *result = (int *)malloc(len1 + len2 + 1);
    char *final_result = (char *)malloc(len1 + len2 + 1);
    for (int i = 0; i < len1 + len2; i++)
        result[i] = 0;
    for (int i = len1 - 1; i >= 0; i--)
    {
        n1 = num1[i] - '0';
        carry = 0;
        i_n2 = 0;
        for (int j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            sum = n1 * n2 + result[i_n1 + i_n2] + carry;
            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = len1 + len2 - 1;
    while (i >= 0 && result[i] == 0)
        i--;
    if (i == -1)
        return "0";
    int j = 0;
    while (i >= 0)
        final_result[j++] = (result[i--] + '0');
    final_result[j] = '\0';
    return final_result;
}

char *add(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int i = len1 - 1;
    int j = len2 - 1;
    int carry = 0;
    int sum;
    int n1, n2;
    int *result = (int *)malloc(len1 + len2 + 1);
    char *final_result = (char *)malloc(len1 + len2 + 1);
    for (int i = 0; i < len1 + len2; i++)
        result[i] = 0;
    while (i >= 0 || j >= 0)
    {
        n1 = i >= 0 ? num1[i] - '0' : 0;
        n2 = j >= 0 ? num2[j] - '0' : 0;
        sum = n1 + n2 + carry;
        carry = sum / 10;
        result[i + j + 1] = sum % 10;
        i--;
        j--;
    }
    if (carry > 0)
        result[i + j + 1] += carry;
    int k = 0;
    while (k < len1 + len2 && result[k] == 0)
        k++;
    if (k == len1 + len2)
        return "0";
    int l = 0;
    while (k < len1 + len2)
        final_result[l++] = (result[k++] + '0');
    final_result[l] = '\0';
    return final_result;
}

int main()
{
    char num1[MAX], num2[MAX];
    printf("Enter the first number: ");
    scanf("%s", num1);
    printf("Enter the second number: ");
    scanf("%s", num2);
    printf("The sum of the two numbers is: %s \n", add(num1, num2));
    printf("The product of the two numbers is: %s \n", multiply(num1, num2));
    return 0;
}
