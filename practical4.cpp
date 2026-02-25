/*Design a program that should use class with the following specifications:
Class: Calculator,
Methods:
1. int add(int a, int b) ,
2 double add(double a, double b),
3. int add(int a, int b, int c).*/
#include<iostream>
using namespace std;
class Calculator
{
    public:
    int add(int a,int b)
    {
       cout<<"Addition of two integer Number: "<<a+b<<endl;
    }
    double add(double a,double b)
    {
       cout<<"Addition of Double Number:"<<a+b<<endl;
    }
    int add(int a,int b,int c)
    {
        cout<<"Addition of three Integer Number:"<<a+b+c<<endl;
    }

};
int main()
{
    Calculator calc;
    calc.add(2,3);
    calc.add(2.2,3.5);
    calc.add(2,3,4);

    return 0;
}