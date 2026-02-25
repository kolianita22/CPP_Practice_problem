#include<iostream>
using namespace std;
class integer
{
    int x,y;

    public:
      integer()
      {
        cout<<"default";
      }
      integer(int x1,int y1)
      {
        x=x1;
        y=y1;

      }
      integer(integer &a)
      {
        x=a.x;
        y=a.y;
      }
      void show()
      {
        std:cout<<x<<y;
      }
};
int main()
{
    integer j(10,20);
    integer i;
    integer k=j;
    j.show();
    i.show();
    k.show();
    return 0;
}