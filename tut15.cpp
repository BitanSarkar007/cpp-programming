#include<iostream>
using namespace std;

int sum(int a, int b); // Function declaration

int main()
{
    int num1, num2;
    cout<<"Enter the value of a: \n"; // '<<' This is called Insertion Operator
    cin>>num1; // '>>' This is called Extraction Operator 
    cout<<"Enter the value of b: \n"; 
    cin>>num2; // num1 and num2 are actual parameters.
    cout<<"The sum is "<<sum(num1, num2)<<"\n";
    return 0;
}

int sum(int a, int b)
{
    // Formal parameters are passed by value from actual parameters num1 and num2.
    return a+b;
}


//1. Write a c++ function to copy an array A to another array B, Both of N elements
//2. Write a C++ function to reverse an array A of N elements