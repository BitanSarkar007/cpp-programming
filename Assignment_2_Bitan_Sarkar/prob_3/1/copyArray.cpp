// Write a C++ function (and program) to copy an array A to another array B, both of N elements.

#include<bits/stdc++.h> 
using namespace std;
void copy(vector<int> &a,vector<int> &b){ 
    b=a; // copy array a to b
}
int main(){
    int n; // size of array
    cout<<"Enter size of array: "; 
    cin>>n; // input size of array
    vector<int> a,b; // Used for storing the input and output
    for(int i=0;i<n;i++){ // Taking input
        int x; // temporary variable
        cin>>x; 
        a.push_back(x); // Pushing the input to the vector
    }
    copy(a,b); // Calling the function
    for(auto &x:b)cout<<x<<" "; // Printing the output
}
