// Write a C++ function (and program) to reverse an array A of N elements.
#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &a){
    reverse(a.begin(),a.end());
}
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // #endif
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    reverse(a);
    for(auto &x:a)cout<<x<<" ";
}

