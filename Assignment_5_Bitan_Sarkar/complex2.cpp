// Declare a class Complex to model a complex number. Use operator overloading to support addition, subtraction and 
// multiplication of complex numbers. Overload the operator > using a non-member function that returns true iff the 
// real part of the 1st number is greater than the real part of the 2nd number, and the imaginary parts of both the 
// numbers are zero

#include <iostream>
using namespace std;

class Complex
{
    float real, imag;
    public: 
        Complex (float r=0, float i =0)
        {
            real = r;
            imag = i;
        }
        Complex operator +(const Complex &obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.imag = real + obj.imag;
            return res;
        }
        Complex operator -(const Complex  &obj)
        {
            Complex res;
            res.real = real - obj.real;
            res.imag = real - obj.imag;
            return res;
        }
        Complex operator * (const Complex &obj)
        {
            Complex res;
            res.real = real * obj.real - imag * obj.imag;
            res.imag = real * obj.imag + imag * obj.real;
            return res;
        }
        int get_real() const
        {
            return (this->real);
        }
        int get_imag() const
        {
            return (this->imag);
        }
        void print()
        {
            cout << real << " + i" << imag << endl;
        }

};

bool operator > (const Complex &c1, const Complex &c2)
{
    if (c1.get_imag()==0 && c2.get_imag()==0) 
    {
        if (c1.get_real()>c2.get_real())
        {
            return true;
        }
        
    }
    
}

int main()
{
    Complex c1(2,3), c2(4,5), c3;
    c3 = c1 + c2 ;
    c3.print();
    c3 = c1 - c2;
    c3.print();
    c3 = c1 * c2;
    c3.print();
    if (c1>c2)
    {
        cout << "the real part of the 1st number is greater than the real part of the 2nd number, and the imaginary parts of both the numbers are zero" << endl;
    }
    
}