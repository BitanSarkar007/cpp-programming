// Suppose IntObject is a class that models an integer and DoubleObiect is a class that models a double. You are
// required to support conversion operators that can convert an IntObject to an int and a DoubleObject to a double. Also
// support a conversion operator in DoubleObiect to convert a DoubleObject to an IntObject. Assume that IntObject does
// not have a constructor to construct an IntObject from a Double0bject.

#include <bits/stdc++.h>
using namespace std;

class IntObject
{
    int i;

public:
    IntObject(int i) : i(i) {}
    operator int() const
    {
        return i;
    }
};

class DoubleObject
{
    double d;
    