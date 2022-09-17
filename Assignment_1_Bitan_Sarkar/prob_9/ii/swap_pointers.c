//Write a C program that can swap two integers using pointers.
#include <stdio.h>
void swap(int *a, int *b); //function prototype
int main()
{
    int a, b;
    printf("Enter the value of a and b");
    scanf("%d%d", &a, &b); //Taking input from user
    printf("Before swapping a=%d and b=%d", a, b);
    swap(&a, &b); //Calling swap function
    printf("After swapping a=%d and b=%d", a, b);
    return 0;
}
void swap(int *a, int *b)//
{
    int temp; //temporary variable
    temp = *a; //storing value of a in temp
    *a = *b; //storing value of b in a
    *b = temp; //storing value of temp in b
} //end of swap function
