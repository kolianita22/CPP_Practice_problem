/*Design a program that should use class with the following specifications:
Class: Complex
Attributes:
• double real: Represents the real part of the complex number.
• double imag: Represents the imaginary part of the complex number.
Methods:
• Complex operator + (const Complex& other):
Overloads the + operator to add two complex numbers.*/
#include<iostream>
using namespace std;
class Complex
{
    double real;
    double imag;
    public:
    Complex(double r,double i)
    {
        real=r;
        imag=i;
    }
    Complex operator+(const Complex &other)
    {
        return Complex(real+other.real,imag+other.imag);
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1(1.0,2.0);
    Complex c2(2.1,5.2);
    Complex c3=c1+c2;

    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c3 = c1 + c2 = ";
    c3.display();

    return 0;
}

