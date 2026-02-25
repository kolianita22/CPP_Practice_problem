#include <iostream>
#include<stdexcept>
using namespace std;
double devide(double n,double d){
    if(d==0)
    {
        throw invalid_argument("division by zero not possible");

    }
    return n/d;
}
int main(){
    double n,d;
    cout<<"enter the numerator:"<<endl;
    cin>>n;
    cout<<"enter the denomerator:"<<endl;
    cin>>d;

    try{
        double r=devide(n,d);
        cout<<"result of division is:"<<r<<endl;

    }
    catch(const invalid_argument& e){
        cout<<"Error is:"<<e.what()<<endl;

    }
    catch(...)
    {
        cout<<"unexpected error"<<endl;
    }
    return 0;
}
