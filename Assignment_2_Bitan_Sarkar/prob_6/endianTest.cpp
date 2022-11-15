// You are given an unsigned integer initilized to 1:
//  #include <iostream>
//  using namespace std;
//  int main() {
//    unsigned int i = 1;
//... }
// Complete the above C++ program to determine if your system follows little-endian or big-endian
// format.

#include <iostream>
using namespace std;
int main()
{
    unsigned int i = 1;
    char *c = (char *)&i;
    if (*c)
        cout << "Little endian";
    else
        cout << "Big endian";
    return 0;
}
