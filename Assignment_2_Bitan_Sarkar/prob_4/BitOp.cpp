// Read about bitwise operators in C++. Write programs to achieve the following for
// unsigned integers a and b.
// 1. Multiply a by 8 using shift operations.
// 2. Count the number of 1’s in the binary representation of a.
// 3. Count the number of trailing 0’s in the binary representation of a.
// 4. Reverse the number a by reversing the bits of a.
// 5. Print the bitwise AND, OR and XOR of a and b.

#include<bits/stdc++.h>
using namespace std;

unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
 
    // traversing bits of 'n' from the right
    while (n > 0) {
        // bitwise left shift
        // 'rev' by 1
        rev <<= 1;
 
        // if current bit is '1'
        if ((n & 1) == 1)
            rev = rev^ 1;
 
        // bitwise right shift
        // 'n' by 1
        n >>= 1;
    }
 
    // required number
    return rev;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // #endif
    int abit;
    unsigned int a,b;

    cin>>a>>b;
    cout<<"Enter the bits of a: "<<endl;
    cin>>abit;
    cout<<a*8<<endl;
    cout<<__builtin_popcount(a)<<endl;
    cout<<__builtin_ctz(a)<<endl;
    cout<<reverseBits(abit)<<endl;
    cout<<(a&b)<<" "<<(a|b)<<" "<<(a^b)<<endl;
}
