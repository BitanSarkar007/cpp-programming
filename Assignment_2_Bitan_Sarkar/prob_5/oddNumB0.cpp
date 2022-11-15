// You are given an array of elements, where each element is an unsigned integer.
// All elements occur an even number of times except one number, say, x. 
// Write a program in C++ using bitwise operators to find x.

#include<bits/stdc++.h>
using namespace std;
int findNum(int a[],int n){
    for (int i = 0; i < n; i++) // Traverse the array
    {
        int count = 0; // Initialize count of current element
        for (int j = 0; j < n; j++) // Count occurrences of current element
        {
            if (a[i] == a[j])
                count++;
        }
        if (count % 2 != 0) // If count is odd, print it
            return a[i];
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i]; // Taking input
    cout<<findNum(a,n); // Calling the function
}
