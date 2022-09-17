// Write a C program to read any two integer values m and n from the keyboard. Then allocate the
// memory to store a two-dimensional matrix, say, DynamicMatrix [m] [n]. Initialize the matrix
// so defined. Then print the matrix in the matrix form and also display the sum of the rows and
// the sum of the columns of the matrix.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j, sum = 0; //declaring variables
    int **DynamicMatrix; // pointer to pointer
    printf("Enter the value of m and n"); 
    scanf("%d%d", &m, &n);                             // Taking input from user
    DynamicMatrix = (int **)malloc(m * sizeof(int *)); // allocating memory for rows
    for (i = 0; i < m; i++) 
    {
        DynamicMatrix[i] = (int *)malloc(n * sizeof(int)); // allocating memory for columns
    }
    printf("Enter the elements of the matrix"); // Taking input from user
    for (i = 0; i < m; i++)                     // loop for rows
    {
        for (j = 0; j < n; j++) // loop for columns
        {
            scanf("%d", &DynamicMatrix[i][j]); // storing elements in the matrix
        }
    }
    printf("The matrix is: "); // printing the matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", DynamicMatrix[i][j]); // printing the elements of the matrix
        }
        printf("The sum of row %d is: ", i + 1); // printing the sum of rows
        for (j = 0; j < n; j++)
        {
            sum = sum + DynamicMatrix[i][j]; // calculating the sum of rows
        }
        printf("%d ", sum);
        sum = 0;
        printf(" ");
    }
    printf("The sum of column is: "); // printing the sum of columns
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            sum = sum + DynamicMatrix[i][j]; // calculating the sum of columns
        }
        printf("%d ", sum); // printing the sum of columns
        sum = 0;           // reinitializing sum to 0
    }
    return 0;
}
