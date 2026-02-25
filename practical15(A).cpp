/*Write a program that utilizes the STL vector container to perform basic
operations like adding elements, removing elements, and iterating through the
elements to display them.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
  
     
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout<<"Adding Element";
    for (int i : vec)
    {
        cout <<i<<" ";
    }
      
    cout << endl;
    vec.pop_back();
    cout<<"Removing element:";
    for (int i: vec)
    {
        cout<< i <<" ";
    }
}