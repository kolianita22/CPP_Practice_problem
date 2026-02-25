/*Write a program that illustrates how to use static data members and static
member functions in C++ using “Counter” Class that contains a static data
member to count the number of objects created. Also, contains static member
functions to access and display the count of objects.*/
#include<iostream>
using namespace std;
class counter
{
    static int count;

    public:
    counter()
    {
        count++;
    }
    static int  access()
    {
        return count;
    }

    static void display()
    {
         
         cout << "Number of objects created: " << count << endl;
    }
};
int counter::count=0;
int main()
{
    counter c1;
    c1.display();
    counter c2;
    c2.display();
    counter c3;
    c3.display();
    counter c4;
    c4.display();

}