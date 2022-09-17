// Write a C program that can compute the multiplication of two matrices, and report if not possible.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, m, p, q;
    printf("Enter the size of the first matrix: ");
    scanf("%d%d", &n, &m); //n and m are the sizes of the first matrix
    printf("Enter the size of the second matrix: ");
    scanf("%d%d", &p, &q); //p and q are the sizes of the second matrix
    int a[n][m], b[p][q], c[n][q];
    if (m != p)
    {
        printf("The multiplication of the two matrices is not possible.\n"); //printing the error message
        return 0;
    }
    printf("Enter the elements of the first matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]); //a is the first matrix
        }
    }
    printf("Enter the elements of the second matrix: ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]); //b is the second matrix
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0; //initializing the product matrix to 0
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < m; k++) //loop for the multiplication
            {
                c[i][j] += a[i][k] * b[k][j]; //c is the product of the two matrices
            }
        }
    }
    printf("The product of the two matrices is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", c[i][j]); //printing the product
        }
        printf("\n");
    }
    return 0;
}
