// Suppose you have a class ShapeCreator that has a public method Shape* create (string ) : where s
// is the name of the shape and can be one of rectangle, circle, and triangle. Depending on the shape
// name s, create(s) constructs a concrete shape as described in Problem 1 and returns it. If the
// shape name is different from the aforementioned names, a ShapeNotSupported exception is thrown
// Write a function that takes a shape name from user and calls the function compute (Shape*)
// described in Problem 1

#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;      // pure virtual function
    virtual double perimeter() = 0; // pure virtual function
};

class Rectangle : public Shape
{
    int length, breadth; // private by default
public:
    Rectangle(int a, int b) // constructor
    {

        length = a;
        breadth = b;
    }
    double area() // overriding area function
    {
        return length * breadth;
    }
    double perimeter() // overriding perimeter function
    {
        return 2 * (length + breadth);
    }
};

class Triangle : public Shape
{
    int s1, s2, s3, h; // private by default
public:
    Triangle(int a, int b, int c, int d) // constructor
    {
        s1 = a;
        s2 = b;
        s3 = c;
        h = d;
    }
    double area() // overriding area function
    {
        return 0.5 * s1 * h;
    }
    double perimeter() // overriding perimeter function
    {
        return s1 + s2 + s3 + h;
    }
};

class Circle : public Shape
{
    int radius;

public:
    Circle(int r) // constructor
    {
        radius = r;
    }
    double area() // overriding area function
    {
        return 3.14 * radius * radius;
    }
    double perimeter() // overriding perimeter function
    {
        return 2 * 3.14 * radius;
    }
};

class ShapeNotSupported : public exception // exception class
{
public:
    const char *what() const throw() // overriding what function
    {
        return "Shape not supported"; // exception message
    }
};

class ShapeCreator
{
public:
    Shape *create(string s) // function to create shape
    {
        if (s == "rectangle") // if shape is rectangle
        {
            int l, b;
            cout << "Enter length and breadth of rectangle: ";
            cin >> l >> b;
            return new Rectangle(l, b); // return pointer to rectangle object
        }
        else if (s == "triangle") // if shape is triangle
        {
            int s1, s2, s3, h;
            cout << "Enter sides and height of triangle: ";
            cin >> s1 >> s2 >> s3 >> h;
            return new Triangle(s1, s2, s3, h); // return pointer to triangle object
        }
        else if (s == "circle") // if shape is circle
        {
            int r;
            cout << "Enter radius of circle: ";
            cin >> r;
            return new Circle(r); // return pointer to circle object
        }
        else
        {
            throw ShapeNotSupported(); // throw exception if shape is not supported
        }
    }
};

void Compute(Shape *s) // function to compute area and perimeter
{
    cout << "Area: " << s->area() << endl;           // area
    cout << "Perimeter: " << s->perimeter() << endl; // perimeter
}

int main()
{
    ShapeCreator sc;                   // object of ShapeCreator class
    Shape *s = sc.create("rectangle"); // create rectangle
    Shape *t = sc.create("triangle");  // create triangle
    Shape *ci = sc.create("circle");   // create circle
    Compute(s);                        // compute area and perimeter of rectangle
    Compute(t);                        // compute area and perimeter of triangle
    Compute(ci);                       // compute area and perimeter of circle
    return 0;
}
