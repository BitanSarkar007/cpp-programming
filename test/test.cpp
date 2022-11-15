// Write a C++ function (and program) to copy an array A to another array B, both of N elements.
#include<bits/stdc++.h>
using namespace std;
void copy(vector<int> &a,vector<int> &b){
    b=a;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int n;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    copy(a,b);
    for(auto &x:b)cout<<x<<" ";
}