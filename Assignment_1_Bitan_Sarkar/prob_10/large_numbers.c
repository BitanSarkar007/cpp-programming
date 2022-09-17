// Write a C program (using recursion) to print all permutations of an N-digit number
// input by the user. Example: 
// Input: 132
// Output: 123, 132, 213, 231 , 312, 321


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(char *a, char *b) //function to swap two characters 
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp; //end of swap function
}

void permute(char *a, int l, int r) //function to print all permutations of a string
{
    int i;
    if (l == r) //base case
        printf("%s\n", a); //printing the string
    else
    {
        for (i = l; i <= r; i++) //loop to swap the characters
        {
            swap((a + l), (a + i)); //calling swap function
            permute(a, l + 1, r); //calling permute function
            swap((a + l), (a + i)); //calling swap function
        }
    }
}

int main()
{
    char a[100]; //declaring variables
    int n;
    printf("Enter the number of digits: "); 
    scanf("%d", &n); //storing the number of digits in n
    printf("Enter the digits: "); 
    scanf("%s", a); //storing the digits in a
    permute(a, 0, n - 1); //calling permute function
    return 0;
}

