// Write a C++program to calculate the value of the expression S= 1+2^2+...+N^2 where N is an user input. Use an inline function to compute x^2 where x is an input integer.

#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += square(i);
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
