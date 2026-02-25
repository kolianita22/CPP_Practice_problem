#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(20);
    dq.push_front(15);
    dq.push_front(11);

    cout<<"Element in deque:";
    for(int num:dq)
    {
        cout<<num<<endl;
    }

    cout<<endl;
    dq.pop_front();
    dq.pop_back();
    cout<<"Element in deque after removal";
    for(int num:dq)
    {
        cout<<num<<endl;
    }

    cout<<endl;
    if(!dq.empty())
    {
        cout<<"First element:"<<dq.front()<<endl;
        cout<<"Last element :"<<dq.back()<<endl;


    }
    else{
        cout<<"Deque is empty"<<endl;
    }
    return 0;
}