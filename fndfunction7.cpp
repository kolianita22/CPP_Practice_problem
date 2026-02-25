#include<iostream>
using namespace std;
class box
{
    double length;
    double breadth;
    double height;
    public:
    box(double l,double b,double h)
    {
        length=l;
        breadth=b;
        height=h;

    }
    friend void dispvolume(const box&  obj);    //declare fun as friend
    
    
};
void dispvolume(const box& obj){
    double volume=obj.length*obj.breadth*obj.height;
    cout<<"volume of box is:"<<volume<<endl;
}
int main(){
    box mb(5.5,6.2,5.0);
    dispvolume(mb);
    return 0;
}