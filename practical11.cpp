/*Write a program that defines a function template to perform operations like
finding the maximum value from two inputs of different data types.*/
#include<iostream>
using namespace std;
template<class T>
T MAX(T x,T y)
{
    if(x<y)
    {
        return y;
    }
    else{
         return x;
    }
}
int main()
{

    
    cout <<" Maximun Intger Value:"<<MAX<int>(65,12) << endl;
    
    cout << "Maxinun Double Value:"<<MAX<double>(2.1, 1.0) << endl;
    
    cout <<"Maximum charecter:" <<MAX<char>('A', 'Z') << endl;

    return 0;
}