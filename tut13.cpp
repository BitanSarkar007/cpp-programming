#include<iostream>
using namespace std;

int main()
{
        int marks[] = {10, 20, 30, 40};
        cout << "The marks are: " << marks[0] << " " << marks[1] << " " << marks[2] << " " << marks[3] << "\n";

        // Pointers and arrays
        // Pointers are used to access the elements of an array.
        int* p = marks; // p is a pointer variable.
        cout << "The value of marks[0] is: " << *p<<endl; // The value of p is: 0x7ffc8b8b8b8
        cout << "The value of marks[1] is: " << *(p+1)<<endl; 
        cout << "The value of marks[2] is: " << *(p+2)<<endl; 
        cout << "The value of marks[3] is: " << *(p+3)<<endl; 

    return 0;//ok
}