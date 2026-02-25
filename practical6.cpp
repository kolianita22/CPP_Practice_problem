/*Design a program that should use class with the following specifications:
Class 1: Shape (Base Class for Runtime Polymorphism)
Methods:
• virtual void draw(): Virtual function to draw a shape. It will be
overridden in derived classes.
Class 2: Circle (Derived from Shape - Runtime Polymorphism)
Methods:
• void draw(): Overrides the draw() method to display a message
indicating that a circle is being drawn.
Class 3: Rectangle (Derived from Shape - Runtime Polymorphism)
Methods:
• void draw(): Overrides the draw() method to display a message indicating
that a rectangle is being drawn.*/
#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void draw()
    {
       cout<<"Base class:"<<endl;
    }
};
class Circle:public Shape
{
    public:
    void draw()
    {
       cout<<"A circle is Being draw"<<endl;
    }
};
class Rectangle:public Shape
{
    public:
    void draw()
    {
        
         cout<<"Rectangel is being draw "<<endl;
    }
};
int main()
{
    Shape *ptr1=new Circle();
    Shape *ptr2=new Rectangle();
    

    ptr1->draw();
    ptr2->draw();

    return 0;


   
}