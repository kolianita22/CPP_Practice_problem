/*Write a program that illustrates the use friend functions in C++ using the class
“Box” that contains private attributes: length, breadth, and height and a friend
function displayVolume to allow access to its private members. The friend
function displayVolume computes and displays the volume of a Box object by
accessing the private attributes of the Box class directly.*/
#include<iostream>
using namespace std;
class Box
{
    private:
     int length,breadth,height;
    public:
     Box(int l,int b,int h)
     {
        length=l;
        breadth=b;
        height=h;
     }
    friend void displayvolume(Box &b);
     
};
 void displayvolume(Box &b)
{
   float volume = b.length * b.breadth * b.height;
    cout << "Volume of the Box: " << volume << " cubic units" << endl;
}
int main()
{
    Box b(4,5,2);
    displayvolume(b);
    return 0;


}