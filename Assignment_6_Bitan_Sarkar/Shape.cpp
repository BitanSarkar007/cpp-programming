// Declare an abstract class Shape and derive classes Rectangle, Circle, and Triangle from it.
// The classes should have member functions to compute the area and perimeter. Implement a function
// void compute(Shape) that takes a pointer of type Shape and prints the area and perimeter of the
// object that the pointer points to.

#include <bits/stdc++.h>

using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Rectangle : public Shape
{
    int length, breadth;

public:
    Rectangle(int a, int b)
    {
        length = a;
        breadth = b;
    }
    double area()
    {
        return length * breadth;
    }
    double perimeter()
    {
        return 2 * (length + breadth);
    }
};

class Circle : public Shape
{
    int radius;

public:
    Circle(int r)
    {
        radius = r;
    }
    double area()
    {
        return 3.14 * radius * radius;
    }
    double perimeter()
    {
        return 2 * 3.14 * radius;
    }
};

class Triangle : public Shape
{
    int s1, s2, s3, h;

public:
    Triangle(int a, int b, int c, int d)
    {
        s1 = a;
        s2 = b;
        s3 = c;
        h = d;
    }
    double area()
    {
        return 0.5 * s1 * h;
        // h is height for side 1 (s1)
    }
    double perimeter()
    {
        return s1 + s2 + s3;
    }
};

void compute(Shape *S)
{
    cout << "Area = " << S->area()<< endl;
    cout << "Perimeter = " << S->perimeter()<< endl;
}

int main()
{
    Rectangle ob(3, 4);
    Triangle ob1(3, 4, 5, 4);
    Circle ob2 (8);
    compute(&ob);
    compute(&ob1);
    compute(&ob2);
}