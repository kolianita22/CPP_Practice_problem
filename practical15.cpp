/*.Write a program that uses virtual classes to calculate
the area of different shapes using the following specification
Abstract Base Class: The Shape class is declared as an abstract class by
defining a pure virtual function area()
Derived Classes:
• Circle: Inherits from Shape and implements the area() method to
calculate the area of a circle
• Rectangle: Inherits from Shape and implements the area() method to
calculate the area of a rectangle
In the main function:
Pointers of type Shape* are used to create objects of Circle and
Rectangle.
After using the created objects, we delete the pointers to free up memory.*/
#include<iostream>
#include<vector>
using namespace std;
class Shape
{
    public:
    virtual void area() = 0;
};
class Circle:public Shape
{
    int radius;
    int pi=3.14;
    public:
    Circle(int r) 
    {
        radius=r;
    }
    void area()
    {
       cout<<"\nArea of Circle:"<<pi*radius*radius<<endl;
    }
};
class Rectangle:public Shape
{
    int length,width;

    public:
    Rectangle(int l, int w) 
    {
        length=l;
        width=w;

    }
    void area()
    {
        cout<<"Area of Rectangle:"<<length*width<<endl;
    }
};
int main()
{
    
    
    Shape *ptr1=new Circle(2);
    Shape *ptr2=new Rectangle(12,3);

    ptr1->area();
    ptr2->area();

    delete ptr1;
    delete ptr2;
    return 0;
}
